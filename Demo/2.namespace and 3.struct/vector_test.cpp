#include "vector.h"
#include <iostream>
using namespace std;
using namespace briup;

void out(Vector *v)
{ 
    int s = v->size();
    for(int i = 0; i < s; i++)
    {
       cout <<v->_array[i] <<", ";
    }
    cout << endl;
    cout <<"-------------------" << endl;
}

int main(void)
{ 
   Vector v;
   cout <<v.size() << endl;
   v.pushFront(10);
   v.pushBack(20);
   out(&v);
   v.insert(1, 11);
   v.insert(2, 12);
   out(&v);
   v.remove(2);
   out(&v);
   return 0;
}

