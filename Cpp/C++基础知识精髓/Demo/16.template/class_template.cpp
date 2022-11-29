#include <iostream>

using namespace std;

template<class T>
class Compare
{
   public:
     Compare(T var1, T var2):m_var1(var1),m_var2(var2){}
    ~Compare(){}
    int out(){
         cout <<"template<class T>" << endl;
         return m_var1 == m_var2;
    }
   private:
     T m_var1;
     T m_var2;
};

template<>
class Compare<double>
{
   public:
     Compare(double var1, double var2):m_var1(var1),m_var2(var2){}
    ~Compare(){}
    int out(){
         cout <<"特化：template<>"<< endl;
         return m_var1 == m_var2;
    }
   private:
     double m_var1;
     double m_var2;
};

int main(void)
{
    Compare<int>com(10, 10);
    cout <<com.out() << endl;
    Compare<double>com1(10.1, 10.2);//调用特化类模板
    cout <<com1.out() << endl;
    return 0;
}



