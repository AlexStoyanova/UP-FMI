#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


const float PI = 3.14;
int max(int x, int y)
{
	return (x > y) ? x : y;
}

int abs(int x)
{
	return (x >= 0) ? x : -x;
}

unsigned int pow(unsigned int n, unsigned int k)
{
	unsigned int multi = 1;
	for (unsigned int i = 0; i < k; i++)
	{
		multi *= n;
	}
	return multi;
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
unsigned int fib(unsigned int n)
{
	unsigned int a = 1;
	unsigned int b = 1;
	unsigned int c;
	for (unsigned int i = 2; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
bool isPrime(unsigned int x)
{
	unsigned int sqrtx = static_cast<unsigned int>(sqrt(x));
	for (unsigned int i = 2; i <= sqrtx; i++)
	{
		if ((x%i) == 0)
		{
			return false;
		}
	}
	return true;
}
unsigned int countDivisions(int x, int y)
{
	unsigned int count = 0;
	while (!(x%y))
	{
		x /= y;
		count++;
	}
	return count;
}
float squareOfCircle(float r )
{
	return roundf(PI*r*r*100)/100;
	
}
int biggestNum(unsigned int n)
{
	int biggest = INT_MIN;
	int z;
	for (unsigned int i = 0; i < n; i++)
	{
		cin >> z;
		biggest = max(biggest, z);
	}
	return biggest;
}
int input()
{
	unsigned int n;
	cin >> n;
	return biggestNum(n);
	
}
void print(int x)
{
	cout << x;
}

int main()
{
	/*int num1, num2;
	cin >> num1 >> num2;
	cout << countDivisions(num1, num2);*/
	/*float num;
	cin >> num;
	cout << squareOfCircle(num);*/
	//print(input());

	return 0;
}