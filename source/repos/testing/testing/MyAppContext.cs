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




        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {

            modelBuilder.Entity<Student>(builder =>
            {
                builder.HasOne<Course>(c => c.MyCourse)
                    .WithMany(c => c.Students)
                    .HasForeignKey(c => c.CourseId);

                builder.HasKey(c => c.Id);
                builder.Property(c => c.Name).IsRequired();
            });


            base.OnModelCreating(modelBuilder);

        }



    }
}
