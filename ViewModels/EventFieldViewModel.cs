using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.ViewModels
{
    public class EventFieldViewModel
    {

        public int Id { get; set; }
        public int? EventId { get; set; }
        public string Value { get; set; }
        public int TemplateFieldId { get; set; }

        public EventViewModel MyEvent { get; set; }
        public TemplateFieldViewModel MyTemplateField { get; set; }

    }
}
