#include <iostream>
#include "account.h"


using namespace std;
using namespace briup;


int main(void)
{
	Account a;
	a.init("Lin",10000.0);
	cout<<"Lin: "<<a.getBalance()<<endl;

	return 0;
}
