#include "vector.h"
#include "stdlib.h"
namespace briup
{
      /* T *_array;
       int _counter;//当前元素个数
       int _maxcounter;//最多可放元素个数*/
       Vector::Vector()//init();
       {
          _array = new T[3];
          _counter = 3;
          _maxcounter = 3;
       }
       Vector::~Vector() //destory();
       {
          delete []_array;
          _array = NULL;
          _counter = 0;
          _maxcounter = 0;
       }
       bool Vector::pushFront(T t)
       {
          insert(0, t);
       }
       bool Vector::pushBack(T t)
       {
          insert(_counter, t);
       }
       bool Vector::insert(int index, T t)
       {
           if(index < 0 || index > _counter)
                          return false;
           encapacity();
           for(int i = _counter; i>index;i--)
           {
              _array[i] = _array[i-1];
           }
           _array[index] = t;
           _counter++;
       }
       void Vector::removeFront()
       {
           remove(0);
       }
       void Vector::removeBack()
       {
           remove(_counter-1);
       }
       void Vector::remove(int index)
       {
        if(index < 0||index > _counter)return;
         for(int i= index; i < _counter; i++)
         {
             _array[i] = _array[i+1];
         }
         _counter--;
       } 
       void setFront(T t)
       {
           set(0, t);
       }
       void setBack(T t)
       {
           set(_counter-1, t);
       }
       void set(int index, T t)
       {
        if(index < 0||index>_maxcounter)return;
        _array[index] = t;
       }
       T    getFront(){}
       T    getBack(){}
       T    get(int index){} 
       void Vector::encapacity() //动态扩展内存
       { 
           if(_counter >= _maxcounter)
           {
              _maxcounter += 5;
           T *_new_array = new T[_maxcounter];
             for(int i = 0; i<_counter; i++)
             {
               _new_array[i] = _array[i];
             }
             delete []_array;
             _array = _new_array;
           }

       }

};



