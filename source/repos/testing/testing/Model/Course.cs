using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace testing.Model
{
    public class Course:IBaseModel
    {

        public int Id {get; set;}
        public String Name { get; set; }
        public int Num { get; set; }
        public int Sec { get; set; }
        public int NumOfStudent { get; set;}
        public ICollection<Student> Students { get; set;}


    }
}
