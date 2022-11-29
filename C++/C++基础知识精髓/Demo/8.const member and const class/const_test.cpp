#include <iostream>
using namespace std;

class Person{
    public:
      Person(){}
      ~Person(){}
      void set(int var){
          this->m_var = var;
      }
      int get() const{  //常成员函数 
        //  m_var2 = 12; //error!
          return m_var;
      }
    private:
      int m_var;
      int m_var2;

};

int main(void)
{
    const Person p;   //常对象
    //p.set(11); //error!
    const_cast<Person &>(p).set(11); //ok  只对当前生效
    cout <<"const_cast: "<< p.get() <<endl;

    //p.set(12); //error! 同样是不对的
    return 0;
}



