﻿using ScreenProject.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Interfaces
{
    public interface IEventRepo : IBaseRepo<Event>
    {
        List<Event> GetCurrentEvent();

    }
}
