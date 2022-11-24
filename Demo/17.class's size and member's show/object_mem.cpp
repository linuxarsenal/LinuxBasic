#include <iostream>
using namespace std;

class A{
   public:
      A():m_var1(10),m_var2('a'),m_var3('b'){}
     ~A(){}
      void disp(){
        cout <<"m_var1="<<m_var1<<" m_var2="<<m_var2<<" m_var3="<<m_var3<<endl;
      }
   private:
     int  m_var1;
     char m_var2;
     char m_var3;
};

int main(void)
{
    A a;
    a.disp();
    cout <<"m_var1: "<<*((int*)(&a))<< endl;
    cout <<"m_var2: "<<*((char*)(&a)+4)<<endl;
    cout <<"m_var3: "<<*((char*)(&a)+5)<<endl;
    cout <<sizeof(a) << endl;
    
    return 0;
}




