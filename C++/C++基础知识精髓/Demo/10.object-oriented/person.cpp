#include "person.h"
#include <iostream>
#include <string.h>
using namespace std;

namespace briup{
   Person::Person(char *myname, int myage, bool mygender)
   {
       strcpy(name, myname);
       age = myage;
       gender = mygender;
   }
   Person::~Person(){}
   void Person::show()//显示基本属性信息
   {
      cout <<"name: "<<name<<" age: "<<age<<" gender: "<<gender << endl;
   }
   int Person::afterYear(int n)//n年后多少岁
   {
      return age += n;
   }
};


