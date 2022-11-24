#include <iostream>
#include <string.h>
using namespace std;

class Mystring{
    public:
      Mystring(char *str, int counter){
         m_str = new char[counter+1];
         memcpy(m_str, str, counter);
         m_counter = counter;
         m_str[counter+1] = '\0';
      }
      //显示定义拷贝构造函数 进行深拷贝(也就是进行内存的拷贝)
       Mystring(const Mystring &str){
        // m_str =  str.m_str; // error!
         cout <<"deep copy constructor" << endl;
         this->m_str = new char[str.m_counter+1];
         memcpy(m_str, str.m_str, str.m_counter);
         this->m_counter = str.m_counter;		
         m_str[m_counter+1] = '\0';
      }
     ~Mystring(){
         cout <<"distructor" << endl;
         delete []m_str;
      }
      void disp(){
         cout <<hex<<m_str<< endl;
      }

    private:
     char *m_str;
     int m_counter;
};

int main(void)
{
    Mystring str("briupemsd1109", 13);
    str.disp();
    Mystring str1 = str;  //用一个已有的对象去构造一个新的对象
    str1.disp();
    return 0;
}





