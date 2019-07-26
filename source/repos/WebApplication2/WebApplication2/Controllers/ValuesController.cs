using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using WebApplication2.Helper;
using WebApplication2.Interfaces;
using WebApplication2.Models;

namespace WebApplication2.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class ValuesController : ControllerBase
    {


        private ICarRepo _ICarRepo;

        public ValuesController(ICarRepo iCarRepo)
        {

            _ICarRepo = iCarRepo;

        }

        // GET api/values
        [HttpGet]
        public List<Car> Get()
        {
            return _ICarRepo.getAll();
        }

        // get api/values/5
        [HttpGet("{id}")]
        public Car get(int id)
        {
            
            return _ICarRepo.get(id);


        }

        // POST api/values
        [HttpPost]
        public void Post([FromBody] Car car)
        {

            _ICarRepo.add(car);



        }

        // PUT api/values/5
        [HttpPut("{id}")]
        public void Put(int id, [FromBody] Car car)
        {
            _ICarRepo.update(id, car);


        }

        // DELETE api/values/5
        [HttpDelete("{id}")]
        public void Delete(int id)
        {


            _ICarRepo.delete(id);


        }
    }
}
