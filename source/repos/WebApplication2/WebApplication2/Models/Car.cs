using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication2.Models
{
    public class Car: IBaseModel
    {
        public int Id { get; set; }
        public string Color { get; set; }

        public string Fname { get; set; }

        public ICollection<Driver> Drivers { set; get; }

      
    }


}
