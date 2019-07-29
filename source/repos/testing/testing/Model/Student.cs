﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace testing.Model
{
    public class Student:IBaseModel
    {

        public int Id { set; get; }
        public string Name { get; set; }
        public int Num { get; set; }
        public string Specialization { get; set; }
        public Course MyCourse { get; set; }
        public int CourseId { get; set; }


    }
}
