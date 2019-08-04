using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Models
{
    public class EventField:IBaseModel
    {
        public int Id { get; set; }
        public int ? EventId  { get; set; }
        public string Value { get; set; }
        public int TemplateFieldId { get; set; }

        public Event MyEvent { get; set; }
        public TemplateField MyTemplateField { get; set; }
    }
}
