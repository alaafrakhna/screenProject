﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using WebApplication2.Interfaces;
using WebApplication2.Models;

namespace WebApplication2.Helper
{
    public class DriverRepo: BaseRepo<Driver>, IDriverRepo
    {

        private MyAppContext _AppContext;

        public DriverRepo(MyAppContext appContext) :base(appContext)
        {

            _AppContext = appContext;

        }


   

    }
}
