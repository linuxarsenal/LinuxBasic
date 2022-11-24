#include "person.h"
#include <iostream>
using namespace std;
using namespace briup;

int main(void)
{
   Person p1("Lin", 24, true);
   p1.show();
   cout <<"after ten years: " << p1.afterYear(10)<<endl;
   cout <<p1.age<< endl;
   return 0;
}



