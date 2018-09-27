#include "wallet.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ofstream myfile;
	myfile.open("wallets.dat");
	myfile.close();
	return 0;
}