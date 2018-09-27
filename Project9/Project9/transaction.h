#ifndef __TRANSACTION_H__
#define __TRANSACTION_H__

struct Transaction {
	long long time;
	unsigned senderId;
	unsigned receiverId;
	double fmiCoins;
};



#endif
