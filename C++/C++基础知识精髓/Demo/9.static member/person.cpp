#include <iostream>
using namespace std;

class Person{
    public:
      Person(){
         cout <<"constructor" << endl;
         m_counter++;
      }
     ~Person(){
         cout <<"distructor" << endl;
         m_counter--;
      }
    static void out_counter(){
         //cout <<m_var<< endl;  //error
         cout <<"people counter: "<<m_counter << endl; //ok
     }
  
  //  private:
      int m_var;
      static int m_counter;
};

int Person::m_counter = 0;

int  main(void)
{
    Person p1;   //constructor
    Person p2;   //constructor
    Person p3;   //constructor
 // p1.out_counter();
 // p3.out_counter();
   Person *p4 = new Person;  //constructor
   cout <<"people counter: "<<Person::m_counter << endl;    //people counter:4
   delete p4;    //distructor
   cout <<"people counter: "<<Person::m_counter << endl;  //people counter:3
   return 0;
}




