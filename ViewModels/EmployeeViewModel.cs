using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.ViewModels
{
    public class EmployeeViewModel
    {
        public int Id { get; set; }
        public string FName { get; set; }
        public string LName { get; set; }
        public DateTime DOB { get; set; }
        public string JobTitle { get; set; }
        public DateTime StartDate { get; set; }
        public string Status { get; set; }
        public string Email { get; set; }

    }
}
