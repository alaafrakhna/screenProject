using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using testing.Model;

namespace testing
{
    public class MyAppContext: DbContext
    {
        public  MyAppContext(DbContextOptions<MyAppContext> options) :base(options)
             {

        }
        public DbSet<Student> Students { get; set; }
        public DbSet<Course> Courses { get; set; }



    }
}
