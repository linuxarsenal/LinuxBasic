#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef int T;
namespace briup
{
   struct Vector
   {
       T *_array;
       int _counter;//当前元素个数
       int _maxcounter;//最多可放元素个数
       Vector();//init();
       ~Vector(); //destory();
       bool pushFront(T t);
       bool pushBack(T t);
       bool insert(int index, T t);
       void removeFront();
       void removeBack();
       void remove(int index); 
       void setFront(T t);
       void setBack(T t);
       void set(int index, T t);
       T    getFront();
       T    getBack();
       T    get(int index); 
       void encapacity(); //动态扩展内存
       inline int size(){
          return _counter;
       }     
   };


};



#endif
