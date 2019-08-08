using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.ViewModels
{
    public class TemplateViewModel
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string BackGroundImg { get; set; }


        public ICollection<TemplateFieldViewModel> TemplateFields { set; get; }
        public ICollection<EventViewModel> Events { set; get; }

    }
}
