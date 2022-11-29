#ifndef _PERSON_H_
#define _PERSON_H_

namespace briup{
class  Person
{ 
 private:
   char name[30];
   int  age;
   bool gender;
 public:
   Person(char *myname, int age, bool gender);
   ~Person();
   void show();//显示基本属性信息
   int afterYear(int n);//n年后多少岁
   inline int getAge(){
      return age;
   }
};
};


#endif
