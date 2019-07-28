using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using AutoMapper;
using Microsoft.AspNetCore.Mvc;
using WebApplication2.Helper;
using WebApplication2.Interfaces;
using WebApplication2.Models;
using WebApplication2.ViewModels;

// For more information on enabling Web API for empty projects, visit https://go.microsoft.com/fwlink/?LinkID=397860

namespace WebApplication2.Controllers
{
    [Route("api/[controller]")]
    public class DriverController : Controller
    {


        private IDriverRepo _iDriverRepo;
        private IMapper _mapper;

        public DriverController(IDriverRepo _idriverrepo, IMapper mapper)
        {

            _iDriverRepo = _idriverrepo;
            _mapper = mapper;
        }


        // GET: api/<controller>
        [HttpGet]
        public List<DriverViewModel> Get()
        {


            List<Driver> driverList = _iDriverRepo.getAll();
            List<DriverViewModel> driverviewmodel = _mapper.Map<List<DriverViewModel>>(driverList);

            return driverviewmodel;

        }


        // GET: api/<controller>
        [HttpGet("GetDriverViewModel")]
        public List<DriverListItem> GetDriverViewModel()
        {


            List<Driver> driverList = _iDriverRepo.getAll();
            List<DriverListItem> driverviewmodel = _mapper.Map<List<DriverListItem>>(driverList);

            return driverviewmodel;

        }


        // get api/values/5
        [HttpGet("{id}")]
        public DriverViewModel get(int id)
        {
            var driver = _iDriverRepo.get(id);
            var driverVm = _mapper.Map<DriverViewModel>(driver);
            return driverVm;
        }

        // POST api/values
        [HttpPost]
        public DriverViewModel Post([FromBody] DriverViewModel driverVm)
        {
           

            var driver = _mapper.Map<Driver>(driverVm);

            _iDriverRepo.add(driver);

            
            driverVm = _mapper.Map<DriverViewModel>(driver);
            return driverVm;
        }

        // PUT api/values/5
        [HttpPut("{id}")]
        public DriverViewModel Put(int id, [FromBody] DriverViewModel driverVm)
        {

            

            var driver = _mapper.Map<Driver>(driverVm);
            _iDriverRepo.update(id, driver);

            driverVm = _mapper.Map<DriverViewModel>(driver);

            return driverVm;

        }



        // DELETE api/values/5
        [HttpDelete("{id}")]
        public void Delete(int id)
        {

            _iDriverRepo.delete(id);




        }
    }
}
