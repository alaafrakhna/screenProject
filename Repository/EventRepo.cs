using Microsoft.EntityFrameworkCore;
using ScreenProject.Interfaces;
using ScreenProject.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Repository
{
    public class EventRepo : BaseRepo<Event>, IEventRepo
    {
        private MyAppContext _AppContext;

        public EventRepo(MyAppContext appContext) : base(appContext)
        {

            _AppContext = appContext;

        }


        public List<Event> GetCurrentEvent()
        {
            DateTime dateTime = DateTime.Now;
            string monthly = dateTime.ToString("dd");
            string daily = dateTime.ToString("");
            string once = dateTime.ToString("dd / MM / yyyy");

            return _AppContext.Events.Include(c => c.MyTemplate).ThenInclude( t => t.TemplateFields)
                .Include(c => c.EventFields)
                .Where(c => ((c.Date.ToString("dd/MM") == dateTime.ToString("dd/MM")) && (c.Repeat == "annual")) || ((c.Date.ToString("dd") == monthly) && (c.Repeat == "monthly")) || ((c.Repeat == "daily")) || ((c.Date.ToString("dd / MM / yyyy") == once) && (c.Repeat == "once"))).ToList();

        }
        



    }
}
