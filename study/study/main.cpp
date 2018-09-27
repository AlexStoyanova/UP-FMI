#include <iostream>
using namespace std;


int main()
{
	int x;
	cin >> x;
	//int mask = 1;
	cout << ((x&1) ? "yes" : "no");
	return 0;
}