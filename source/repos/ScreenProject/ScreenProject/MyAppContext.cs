using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject
{
    public class MyAppContext:DbContext
    {

        public MyAppContext(DbContextOptions<MyAppContext> options) : base(options)
        {

        }
    }
}
