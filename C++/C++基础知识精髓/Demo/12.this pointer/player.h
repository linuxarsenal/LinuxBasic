#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "address.h"
#include <iostream>
using namespace std;
class Player{
   public:
      Player(){addr = NULL;}
      Player(int num, string name, int age, double salary)
      {
          this->num = num;
          this->name = name;
          this->age = age;
          this->salary = salary;
          this->addr = NULL;
      }
      Player(int num, string name, int age, double salary, Address *addr){
          this->num = num;
          this->name = name;
          this->age = age;
          this->salary = salary;
          this->addr = addr; 
      }
     ~Player(){}
     void setNum(int num){
          this->num = num;
     }
     int getNum() const{
           return num;
     }  
     void setAge(int age){
          this->age = age;
     }
     int getAge() const{
          return age;
     }
     void setSalary(double salary){
          this->salary = salary;
     }
     double getSalary() const{
          return salary;
     }
     void setAddress(Address *addr){
          this->addr = addr;
     }
     Address *getAddress(){
          return addr;
     }
     void out(){
          cout <<"num:  "<<num<< endl;
          cout <<"name: "<<name<< endl;
          cout <<"age:  " <<age<<endl;
          cout <<"salary: "<<salary <<endl;
          if(addr != NULL){
              addr->out();
          }
          cout <<"******************" << endl;
     }
   private:
      int num;
      string name;
      int age;
      double salary;
      Address *addr;
};


#endif
