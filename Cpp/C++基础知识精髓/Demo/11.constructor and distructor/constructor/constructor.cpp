#include <iostream>
using namespace std;

class Person
{
   public:
       Person(){cout <<"---constructor---"<< endl;}
      // Person(int a){m_var1 = a;}
       Person(int a):m_var1(a),m_var2(m_var2),m_var3(a)     
       {
        // m_var3 = 3; //error
         cout <<"Person(int, int) constructor" << endl; 
       }
       ~Person(){cout <<"---distructor---" << endl;} 
       void show(){cout <<"m_var1: "<<m_var1 <<" m_var2: "<<m_var2<< endl;}
   private:
     int m_var1;
     int m_var2;
     const int m_var3;
    // int &ref;
     
};

Person p1(10);

int main()
{
   // Person p(10, 30);
   // p.show();
    cout <<"----------------" << endl;
    Person *p = new Person(10);
    p->show();
    delete p;
    p1.show();
    cout <<"----------------" << endl;
    return 0;
}





