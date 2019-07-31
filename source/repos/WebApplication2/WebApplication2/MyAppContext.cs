using Microsoft.AspNetCore.Identity.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using WebApplication2.Models;

namespace WebApplication2
{
    public class MyAppContext : IdentityDbContext<AppUser, AppRole,int>
    {
        public MyAppContext(DbContextOptions<MyAppContext> options) : base(options)
        {


        }
        public DbSet<Car> Cars { get; set; }
        public DbSet<Driver> Drivers { get; set; }
        public DbSet<AppUser> AppUsers { get; set; }
        public DbSet<AppRole> AppRoles { get; set; }



        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {

            modelBuilder.Entity<Driver>(builder =>
            {
                builder.HasOne<Car>(c => c.MyCar)
                    .WithMany(c => c.Drivers)
                    .HasForeignKey(c => c.CarId);

                builder.HasKey(c => c.Id);
                builder.Property(c => c.Name).IsRequired();
            });


            base.OnModelCreating(modelBuilder);

        }
       
    }
}