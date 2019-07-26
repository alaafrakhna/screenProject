using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.ComponentModel.DataAnnotations;

namespace WebApplication2.Models
{
    public class Driver: IBaseModel
    {
        public int Id { set; get; }
        public String Name { set; get; }
        public Car MyCar { get; set; }
        public int CarId{ get; set; }

    }
}
