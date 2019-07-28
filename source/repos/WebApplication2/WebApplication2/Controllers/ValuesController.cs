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

namespace WebApplication2.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class ValuesController : ControllerBase
    {


        private ICarRepo _ICarRepo;

        private IMapper _mapper;
        public ValuesController(ICarRepo iCarRepo,IMapper mapper)
        {

            _ICarRepo = iCarRepo;
            _mapper = mapper;
        }

        // GET api/values
        [HttpGet]
        public List<CarViewModel> Get()
        {
            List < Car > carList = _ICarRepo.getAll();
            List<CarViewModel> carviewmodel = _mapper.Map<List<CarViewModel>>(carList);

            return carviewmodel;
        }



        // get api/values/5
        [HttpGet("{id}")]
        public CarViewModel get(int id)
        {
            
           var car = _ICarRepo.get(id);
            var carVm = _mapper.Map<CarViewModel>(car);
            return carVm;

        }


        // POST api/values
        [HttpPost]
        public CarViewModel Post([FromBody] CarViewModel carVm)
        {

            var car = _mapper.Map<Car>(carVm);
            _ICarRepo.add(car);

            carVm = _mapper.Map<CarViewModel>(car);

            return carVm;

        }


       


        // PUT api/values/5
        [HttpPut("{id}")]
        public CarViewModel Put(int id, [FromBody] CarViewModel carVm)
        {

            var car = _mapper.Map<Car>(carVm);
            _ICarRepo.update(id, car);

            carVm = _mapper.Map<CarViewModel>(car);

            return carVm;



        }

        // DELETE api/values/5
        [HttpDelete("{id}")]
        public void Delete(int id)
        {
            
            _ICarRepo.delete(id);


        }
    }
}
