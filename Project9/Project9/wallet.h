#ifndef __WALLET_H__
#define __WALLET_H__


#include <fstream>


struct Wallet {
	char owner[256];
	unsigned id;
	double fiatMoney;
};



#endif