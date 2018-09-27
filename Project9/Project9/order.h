#ifndef __ORDER_H__
#define __ORDER_H__

struct Order {
	enum Type { SELL, BUY } type;
	unsigned walletId;
	double fmiCoins;
};
#endif // !__ORDER_H__
