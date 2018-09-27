#include <iostream>
using namespace std;


int main()
{
	// zad. 5
	/*int x; 
	cin >> x;
	int mask = (~7);
	cout << (x&mask);*/

	// zad. 6
	/*unsigned int number;
	unsigned int mask;

	cin >> number;

	for (unsigned int i = sizeof(unsigned int) * 8; i > 0; i--)
	{
		mask = 1;
		mask = mask << (i - 1);
		cout << ((number&mask) ? "1" : "0");
	}*/

	int x;
	x = 11 / 3;
	cout << x;
	return 0;
}