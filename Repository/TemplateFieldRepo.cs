using ScreenProject.Interfaces;
using ScreenProject.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Repository
{
    public class TemplateFieldRepo : BaseRepo<TemplateField>, ITemplateFieldRepo
    {

        private MyAppContext _AppContext;

        public TemplateFieldRepo(MyAppContext appContext) : base(appContext)
        {

            _AppContext = appContext;

        }
    }
}
