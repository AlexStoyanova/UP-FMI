#include <iostream>
#include <cmath>
using namespace std;

unsigned int howManyTimesDigitInNumber(int number, unsigned int digit);

bool digitExistsInNumber(int number, unsigned int digit)
{
	return howManyTimesDigitInNumber(number, digit);
}

unsigned int howManyTimesDigitInNumber(int number, unsigned int digit)
{
	unsigned int count = 0;
	while (number)
	{
		if ((number % 10) == digit)
		{
			count++;
		}
		number /= 10;
	}
	return count;
}

unsigned int fib(unsigned int n)
{
	unsigned int a = 1;
	unsigned int b = 1;
	unsigned int c;
	for (int i = 2; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}


int gcd(int x, int y)
{
	int r = y;
	if (y == 0)
	{
		return x;
	}
	while (x%y)
	{
		r = x%y;
		x = y;
		y = r;
	}
	return r;
}

unsigned int countDigit(unsigned int number)
{
	unsigned int count = 0;
	while (number)
	{
		number /= 10;
		count++;
	}
	return count;
}

unsigned int newNumber(unsigned int n, unsigned int k)
{
	unsigned int new_number = 0;
	unsigned int count = countDigit(n);
	for (unsigned int i = 1; i < k; i++)
	{
		new_number += (n % 10)*pow(10,i-1);
		n /= 10;
	}
	n /= 10;
	for (unsigned int i = k + 1; i <= count; i++)
	{
		new_number += (n % 10)*pow(10, i-2);
		n /= 10;
	}
	return new_number;
}

int main()
{

	int x, k;
	cin >> x >> k;
	cout << newNumber(x, k);


	return 0;
}