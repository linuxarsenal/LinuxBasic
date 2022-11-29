#include <stdio.h>
#include <iostream>
using namespace std;

// 派生类是基类的具体化，而基类是派生类的抽象。
// 在多继承时，如果省略继承方式，默认为private
// 如果在派生类中声明了一个与基类成员相同名字的函数，派生类的新成员会覆盖基类的同名成员

/* 不管何种继承 基类的私有程序都不能被派生类继承 否则会破坏C++的封装特性
 * 基类的友元函数也不能被继承，友元只是能访问指定类的私有和保护成员的自定义函数，不是被指定类的成员，自然不能继承
 * 基类与派生类的静态成员函数与静态成员是共用一段空间的，即静态成员和静态成员函数是可以继承的
 */
// public公有继承时 基类的公用成员public和保护成员protected在派生类中保持原有的访问属性，其私有成员仍为基类私有，即在派生类中不能访问，在类外也不能访问
// protected保护继承 特点是基类的所有公有成员和保护成员都成为派生类的保护成员，并且只能被它的派生类成员函数或友元访问，基类的私有成员仍然是私有的
// private私有继承 私有继承即所有基类成员均变成派生类的私有成员，基类的私有成员仍然不能在派生类中访问

class BASE
{
public:
	void who()
	{
		cout << "this is base !" << endl;
	}

      void Fun()
      {
           cout << "this is base Fun ! " << endl;
      }
};

class CD1:public BASE
{
public:
	void who()
	{
		cout << "this is CD1 !" << endl;
	}
};

class CD2:public BASE
{
public:
	void who()
	{
		cout << "this is CD2 !" << endl;
	}
};


int main(int argc, char* argv[])
{
	CD1 obj1;
	CD2 obj2;

      obj1.Fun();
      obj2.Fun();

	obj1.who();  //this is CD1 !
	obj2.who();  //this is CD2 !

	return 0;
}
