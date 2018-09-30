#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	unsigned int number;
	cin >> number;
	int sqrt1 = sqrt(number);
	for (int i = 2; i <= sqrt1; i++)
	{
		if ((number%i) == 0)
		{
			cout << "compose\n";
			return 0;
		}

	}
	cout << "prime\n";

	return 0;
}