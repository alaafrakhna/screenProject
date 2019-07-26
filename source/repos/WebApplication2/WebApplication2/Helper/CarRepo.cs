using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using WebApplication2.Interfaces;
using WebApplication2.Models;

namespace WebApplication2.Helper
{
    public class CarRepo:BaseRepo<Car>,ICarRepo
    {


        private MyAppContext _AppContext;

        public CarRepo(MyAppContext appContext):base(appContext)
        {

            _AppContext = appContext;

        }



       
    }
}
