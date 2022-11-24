#include <iostream>
using namespace std;

template<class T>
class Binary_op
{
 public:
    Binary_op(T var1, T var2):m_var1(var1),m_var2(var2){}
    ~Binary_op(){}
   void add();
   void sub();
   void mul();
   void div();
   void result(char op);
 private:
      T m_var1;
      T m_var2;
      char m_op;
};

template<class T>
void Binary_op<T>::add()
{
   cout<<m_var1<<"+"<<m_var2<<"=" <<m_var1+m_var2<<endl;
}

template<class T>
void Binary_op<T>::sub()
{
   cout <<m_var1<<"-"<<m_var2<<"="<<m_var1-m_var2<<endl;
}

template<class T>
void Binary_op<T>::mul()
{
   cout <<m_var1<<"*"<<m_var2<<"="<<m_var1*m_var2<<endl;
}

template<class T>
void Binary_op<T>::div()
{
   cout <<m_var1<<"/"<<m_var2<<"="<<m_var1/m_var2<<endl;
}

template<class T>
void Binary_op<T>::result(char op)
{
   this->m_op = op;
   switch(m_op)
   {
     case '+':
          add();
          break;
     case '-':
          sub();
          break;
     case '*':
           mul();
           break;
      case '/':
           div();
           break;
      default:
          cout <<"operator error!" << endl;
          break;    
   }
}

int main(void)
{
    Binary_op<int>binary(3.14, 10);
    binary.result('+');
    binary.result('-');
    binary.result('*');
    binary.result('/');

    return 1;
}
















