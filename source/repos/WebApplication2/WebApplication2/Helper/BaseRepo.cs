using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using WebApplication2.Interfaces;
using WebApplication2.Models;

namespace WebApplication2.Helper
{
    public class BaseRepo<T>:IBaseRepo<T> where T:class, IBaseModel
    {



        private MyAppContext _AppContext;

        public BaseRepo(MyAppContext appContext)
        {

            _AppContext = appContext;

        }



        public List<T> getAll()
        {
            return _AppContext.Set<T>().ToList();
        }


        public T get(int id)
        {
            T car = _AppContext.Set<T>().Where(c => c.Id == id).FirstOrDefault();
            return car;


        }


        public void add(T car)
        {


            _AppContext.Set<T>().Add(car);
            _AppContext.SaveChanges();

        }



        public void update(int id, T car)
        {

            if (id == car.Id)
            {

                _AppContext.Set<T>().Update(car);

                _AppContext.SaveChanges();
            }

        }


        public void delete(int id)
        {

            T car = _AppContext.Set<T>().Find(id);

            _AppContext.Set<T>().Remove(car);

            _AppContext.SaveChanges();

        }


    }




  
 


}
