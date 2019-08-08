using ScreenProject.Interfaces;
using ScreenProject.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ScreenProject.Repository
{
    public class BaseRepo<T> : IBaseRepo<T> where T : class, IBaseModel
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


        public void add(T t)
        {


            _AppContext.Set<T>().Add(t);
            _AppContext.SaveChanges();

        }



        public void update(int id, T t)
        {

            if (id == t.Id)
            {

                _AppContext.Set<T>().Update(t);

                _AppContext.SaveChanges();
            }

        }


        public void delete(int id)
        {

            T t = _AppContext.Set<T>().Find(id);

            _AppContext.Set<T>().Remove(t);

            _AppContext.SaveChanges();

        }


    


}
}
