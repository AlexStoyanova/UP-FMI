#include <iostream>
using namespace std;

bool isPrime(unsigned int number)
{
	if (number < 2)
	{
		return false;
	}
	int sqrt_num = (int)sqrt(number);
	for (int i = 2; i <= sqrt_num; i++)
	{
		if ((number % i) == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned int sumDigitsInNumber(unsigned int number)
{
	unsigned int sum = 0;
	while (number)
	{
		sum += (number % 10);
		number /= 10;
	}
	return sum;
}

int main()
{
	/*unsigned int a, b;
	do
	{
		cout << "Enter a: " << endl;
		cin >> a;
	} while (a < 0 || a > 1024);
	do
	{
		cout << "Enter b: " << endl;
		cin >> b;
	} while ((b < 0) || (b > 1024) || (b == a) || (b < a));
	unsigned int sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum = sumDigitsInNumber(i);
		if (isPrime(i) && isPrime(sum))
		{
			cout << i << ' ';
		}
	}*/

	const int SIZE = 100;
	unsigned int n;
	do
	{
		cin >> n;
	} while (n <= 0 || n >= 100);
	int matrix[SIZE][SIZE];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int temp = n*n;
	int *buff = new(nothrow) int[temp + 1];
	for (int i = 0; i < temp; i++)
	{
		buff[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buff[matrix[i][j] + 1]++;
		}
	}
	bool isSudoku = true;
	for (int i = 1; i <= temp; i++)
	{
		if (i == 0)
		{
			isSudoku = false;
		}
	}
	if (isSudoku)
	{
		cout << "Su-do-ku!" << endl;
	}
	else
	{
		cout << "Is NOT a su-do-ku!" << endl;
	}
	delete[] buff;
	return 0;
}