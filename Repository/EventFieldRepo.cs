using ScreenProject.Interfaces;
using ScreenProject.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Repository
{
    public class EventFieldRepo : BaseRepo<EventField>, IEventFieldRepo
    {

        private MyAppContext _AppContext;

        public EventFieldRepo(MyAppContext appContext) : base(appContext)
        {

            _AppContext = appContext;

        }
    }
}
