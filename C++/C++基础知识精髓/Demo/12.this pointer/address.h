#ifndef _ADDRESS_H_
#define _ADDRESS_H_
#include <string>
#include <iostream>
using namespace std;

class Address{
    public:
      Address(){}
      Address(string country, string province, string city, string street)
     {
         this->country = country;
         this->province = province;
         this->city = city;
         this->street = street;
     }
     ~Address(){}
     void setProvince(string province){
         this->province = province;
     }
     string getProvince() const{
         return province;
     }
     void setStreet(string street){
         this->street = street;
     }
     string getStreet() const{
         return street;
     }
     void out(){
         cout <<country<<"-"<<province<<"-"<<city<<"-"<<street<<endl;

     }
    private:
      string country;
      string province;
      string city;
      string street;
};


#endif
