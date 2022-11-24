#include <iostream>
#include <string.h>
#include "account.h"

namespace briup
{
		void Account::deposit(double amount)
		{
			if(amount < 0) return;
			balance += amount;
		}
		void Account::withdraw(double amount)
		{
			if(amount > balance || amount < 0)return;
			balance -= amount;
		}
};



