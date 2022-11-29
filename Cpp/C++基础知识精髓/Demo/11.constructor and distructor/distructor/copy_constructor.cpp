#include <iostream>
#include <string>
using namespace std;

class Computer{
     public:
       Computer(){}
       Computer(Computer&){
         cout <<"----computer constructor----" << endl;
       }
       ~Computer(){}
     private:
       string name;
};


class Student{
     public:
       Student(){}
       Student(string name, int age){
           cout <<"----constructor----" << endl;
           Computer com;
           m_comp = com;
           this->name = name;
           this->age = age;
       }
       //拷贝构造函数
        Student(const Student &s){
           cout <<"----copy constructor----" << endl;
           this->name = s.name;
           this->age = s.age;
       }
       ~Student(){}
       //把一个对象作为返回值的时候会调用该对象的一个拷贝构造函数
       Computer getComp(){
            cout <<"getComp()"<< endl;
            return m_comp;
         
       }
       Student getst(){
            return *this; //会调用该对象的拷贝构造函数
       }
       void disp(){
           cout <<"name: "<<name<<" age: "<<age << endl;
       }
     private:
       string name;
       int    age;
       Computer m_comp;
};

//把对象作为参数进行值传递的时候拷贝构造函数会被调用
void disp_out(Student s)
{
     s.disp();
}


int main(void)
{
    Student s1("Lin", 20);
    s1.disp();
    Student s2 = s1;//自动调用拷贝构造函数
    s2.disp(); 
    Student s3(s2);//显式使用拷贝构造函数
    s3.disp();
    cout <<"******************" << endl;
    disp_out(s3);  //把一个对象作为值传递的时候会调用拷贝构造函数
    cout <<"------------------" << endl;
    s1.getComp();
    s3.getst();
    return 0;
}









