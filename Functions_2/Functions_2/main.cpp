#include <iostream>
#include <cmath>
//using namespace std;

const int x1 = -3;
const int y5 = 2;
const int x2 = 2;
const int y2 = -3;
const int c_1 = 1;
const int c_2 = 1;
const float r = 3.0;

//A
/*
bool inTheRectangle(int x, int y, int x1, int x2, int y5, int y2)
{
return ((x <= x2) && (x >= x1) && (y <= y5) && (y >= y2));
}
*/


//B
/*
bool inTheCircle(int x_1, int y_1, int c_1, int c_2, int rad)
{
float distance = sqrt((x_1 - c_1)*(x_1 - c_1) + (y_1 - c_2)*(y_1 - c_2));
return distance < rad;
}
*/


//C
/*
if (y_1 > 0)
{
if (inTheCircle(x_1, y_1, 0, 0, 5))
std::cout << "In";
else
std::cout << "Out";
}
else
{
if(inTheRectangle(x_1, y_1,-4, 4, 0, -2))
std::cout << "In";
else
std::cout << "Out";
}

*/
unsigned int countDigit(int n)
{
	unsigned int count = 1;
	while (n / 10)
	{
		n /= 10;
		count++;
	}
	return count;
}
int newNumber(int n, unsigned int k, unsigned int count)
{
	int newNum = 0;
	for (int i = 1; i < k; i++)
	{
		newNum += (n % 10)*pow(10, i - 1);
		n /= 10;
	}
	n /= 10;
	for (int i = k+1; i <= count; i++)
	{
		newNum += (n % 10)*pow(10, i - 2);
		n /= 10;
	}
	return newNum;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::cout << newNumber(n, k, countDigit(n)) << std::endl;
	





	return 0;
}