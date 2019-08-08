using AutoMapper;
using ScreenProject.Models;
using ScreenProject.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject
{
    public class MapperProfile : Profile
    {
        public MapperProfile()
        {
         
            CreateMap<Event, EventViewModel>().ReverseMap();
            CreateMap<Employee, EmployeeViewModel>().ReverseMap();
            CreateMap<Template, TemplateViewModel>().ReverseMap();
            CreateMap<TemplateField, TemplateFieldViewModel>().ReverseMap();
            CreateMap<EventField, EventFieldViewModel>().ReverseMap();

            //    .ForMember(c => c.BackGroundImg, map => map.MapFrom(c => c.MyTemplate.BackGroundImg))
            //    .ForMember(c => c.Name, map => map.MapFrom(c => c.MyTemplate.Name))
            //    .ForMember(c => c.Value, map => map.MapFrom(c => c.EventFields.Value.ToList()))


            //    .ReverseMap();

            //CreateMap< EventField, EventFieldViewModel > ().ForMember(c => c.Value, map => map.MapFrom(c => c.Value))
            //   .ForMember(c => c.FontColor, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   .ForMember(c => c.FontFamily, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   .ForMember(c => c.FontSize, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   .ForMember(c => c.FontStyle, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   .ForMember(c => c.FontWeight, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   .ForMember(c => c.LeftPosition, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   .ForMember(c => c.TopPosition, map => map.MapFrom(c => c.MyTemplateField.FontColor))
            //   //.ForMember(c => c.Value, map => map.MapFrom(c => c.EventFields.Value.ToList()))
            //   .ReverseMap();


        }
    }
}
