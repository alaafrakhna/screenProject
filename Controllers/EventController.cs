using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using AutoMapper;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Options;
using ScreenProject.Interfaces;
using ScreenProject.Models;
using ScreenProject.ViewModels;

// For more information on enabling Web API for empty projects, visit https://go.microsoft.com/fwlink/?LinkID=397860

namespace ScreenProject.Controllers
{
    [Route("api/[controller]")]
    public class EventController : Controller
    {
        private readonly IOptions<SetData> appSettings;
        private IEventRepo _IEventRepo;
        private IMapper _mapper;


        public EventController(IEventRepo ieventrepo, IMapper mapper, IOptions<SetData> app)
        {

            _IEventRepo = ieventrepo;
            _mapper = mapper;
            appSettings = app;
        }



        // GET: api/<controller>
        [HttpGet("GetCurrentEvent")]
        public List<EventViewModel> GetCurrentEvent()
        {
          

            List<Event> eventList = _IEventRepo.GetCurrentEvent();
             List<EventViewModel> eventviewmodel = _mapper.Map<List<EventViewModel>>(eventList);

             return eventviewmodel;

          //  return eventList;


        }




        // GET api/<controller>/5
        [HttpGet("{id}")]
        public string Get(int id)
        {
            return "value";
        }


        // GET api/<controller>/5
        [HttpGet("GetData")]
        public SetData GetData()
        {
            return appSettings.Value;
        }


        // POST api/<controller>
        [HttpPost]
        public void Post([FromBody]string value)
        {
        }

        // PUT api/<controller>/5
        [HttpPut("{id}")]
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE api/<controller>/5
        [HttpDelete("{id}")]
        public void Delete(int id)
        {
        }
    }
}
