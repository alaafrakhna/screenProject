using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using WebApplication2.Helper;
using WebApplication2.Interfaces;
using WebApplication2.Models;

// For more information on enabling Web API for empty projects, visit https://go.microsoft.com/fwlink/?LinkID=397860

namespace WebApplication2.Controllers
{
    [Route("api/[controller]")]
    public class DriverController : Controller
    {


        private IDriverRepo _iDriverRepo;

        public DriverController(IDriverRepo _idriverrepo)
        {

            _iDriverRepo = _idriverrepo;

        }


        // GET: api/<controller>
        [HttpGet]
        public List<Driver> Get()
        {

            return _iDriverRepo.getAll();


        }

        // get api/values/5
        [HttpGet("{id}")]
        public Driver get(int id)
        {
           
            return _iDriverRepo.get(id);
        }

        // POST api/values
        [HttpPost]
        public void Post([FromBody] Driver driver)
        {
            _iDriverRepo.add(driver);

        }

        // PUT api/values/5
        [HttpPut("{id}")]
        public void Put(int id, [FromBody] Driver driver)
        {

            _iDriverRepo.update(id, driver);

        }

        // DELETE api/values/5
        [HttpDelete("{id}")]
        public void Delete(int id)
        {

            _iDriverRepo.delete(id);




        }
    }
}
