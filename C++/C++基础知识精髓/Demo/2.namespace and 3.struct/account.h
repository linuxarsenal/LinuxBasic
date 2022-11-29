#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string.h>
using namespace std;
namespace briup
{
	struct Account
	{
		char name[30];
		double balance;
		void init(char *myname,double mybalance)
		{
			strcpy(name,myname);
			balance = mybalance;
		}
		void deposit(double amount);
		void withdraw(double amount);
		inline double getBalance()
		{
			return balance;
		}
	};
}



#endif
