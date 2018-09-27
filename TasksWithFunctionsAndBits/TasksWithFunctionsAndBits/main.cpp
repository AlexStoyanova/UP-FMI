#include <iostream>
using namespace std;

int increment(int x)
{
	return (x + 1);
}

unsigned int sum(int x)
{
	int sum = 0;
	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}
	return sum;
}
unsigned int fib(unsigned int x)
{
	unsigned int a = 1;
	unsigned int b = 1;
	unsigned int c;
	for (unsigned int i = 2; i < x; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int factor(int x)
{
	int result = 1;
	for (int i = 1; i <= x; i++)
	{
		result *= i;
	}
	return result;
}





int main()
{
	int number;
	cin >> number;
	cout << factor(number);









	return 0;
}