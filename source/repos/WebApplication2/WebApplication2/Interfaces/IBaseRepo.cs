using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using WebApplication2.Models;

namespace WebApplication2.Interfaces
{
   public interface IBaseRepo<T> where T:class,IBaseModel
    {


        List<T> getAll();

        T get(int id);

        void add(T t);

        void update(int id, T t);

        void delete(int id);

    }
}
