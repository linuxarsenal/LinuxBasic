#include <iostream>
using namespace std;

void swap1(int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
}

void swap2(int *p, int *q)
{
   int temp = *p;
   *p = *q;
   *q = temp;
}

void swap3(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

int main(void)
{
   int a = 10;
   int b = 20;
   // int &ref; //error!
   // int &ref = 20;//error!
   //const int &ref = 20;// ok
   swap1(a, b);
   cout <<"swap1(int,int): "<<a<<" "<<b << endl;   a = 10;
   b = 20;
   swap2(&a, &b);
   cout <<"swap2(int*,int*): "<<a<<" "<<b << endl; a = 20;
   b = 10;
  // int &ref_a = a;
  // int &ref_b = b;
   swap3(a, b);
   cout <<"swap3(int&,int&): "<<a<<" "<<b << endl; 
   return 0;
}



