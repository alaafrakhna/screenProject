using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Models
{
    public class TemplateField: IBaseModel
    {
        public int Id { get; set; }
        public int ? TemplateId { get; set; }
        public string Name { get; set; }
        public int TopPosition { get; set; }
        public int LeftPosition { get; set; }
        public int FontSize { get; set; }
        public string FontColor { get; set; }
        public string FontFamily { get; set; }
        public string FontWeight { get; set; }
        public string FontStyle { get; set; }


        public Template MyTemplate { get; set; }
        public ICollection<EventField> EventFields { set; get; }


    }
}
