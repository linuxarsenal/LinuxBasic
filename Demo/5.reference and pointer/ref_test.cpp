#include <iostream>
using namespace std;

int main(void)
{
   int a = 10;
  // int &ref;//error!
  // int &ref = 10; //error!
  // const int &ref = 10; //ok
   const int &ref_a = a;//ok
  // ref_a = 11;
   a = 12;
   cout <<"ref_a: "<<a<< endl;
  /* const int b = 20;
   int &ref_b = b; // error!
   const int &res_b = b; //ok


   int c = 11; //·Çconst¶ÔÏó
   const int &ref_c = c; //ok
   //ref_c++;//error!
  */


   return 0;
}
