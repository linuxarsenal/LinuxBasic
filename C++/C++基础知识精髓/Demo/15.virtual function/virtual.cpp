#include <stdio.h>
#include <iostream>
using namespace std;


/**************************
*加virtual与不加virtual的区别
***************************/
class BASE
{
public:
	void who()  
	{
		cout << "this is base !" << endl;
	}
/*
	virtual void who()     //virtual
	{
		cout << "this is base !" << endl;
	}
*/
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
	BASE obj;
	BASE *p;
	CD1 obj1;
	CD2 obj2;

	p = &obj;
	p->who();

	p = &obj1;
	p->who();

	p = &obj2;
	p->who();

	obj1.who();
	obj2.who();

	return 0;
}
