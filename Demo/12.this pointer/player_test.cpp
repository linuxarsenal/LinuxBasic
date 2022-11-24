#include "address.h"
#include "player.h"
#include <iostream>

using namespace std;

int main(void)
{
   Address addr("china", "shanghai", "shanghai","huaihai RD");
   Player p1(17, "Lin", 24, 10000, &addr);
   p1.out();
   cout <<"-------------------" << endl;
   Player p2(24, "Kobe", 34, 20000);
   Address addr2("china", "jiangsu", "kunshan","xuey RD");
   p2.setAddress(&addr2);
   p2.out();
   cout <<"-------------------" << endl;
   Address *addr3 = new Address("USA", "MAIAMI", "MAIAMI", "MM.RD");
   Player *p3 = new Player(6, "James", 28, 20000, addr3);
   p3->out();
   delete addr3;
   delete p3;
   return 0;


} 
