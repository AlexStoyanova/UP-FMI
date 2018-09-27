#include <iostream>
#include <cmath>
using namespace std;

const int MAX_LIMIT = pow(10, 10);
const int BITS_OF_INT = sizeof(int) * 8;

void print(unsigned n) {
	unsigned mask = 1 << 31;
	while (mask > 0) {
		if ((n&mask) != 0) {
			std::cout << "1";
		}
		else {
			std::cout << "0";
		}
		mask >>= 1;
	}
	cout << endl;
}

unsigned int validNumber()
{
	unsigned int num;
	do {
		cin >> num;
	} while (num < 0 || num >= MAX_LIMIT);

	return num;
}

void setOnes(unsigned int &number, unsigned int start, unsigned int end)
{
	unsigned int mask = 1 << (start - 1);
	for (int i = start; i >= end; i-=2)
	{
		number |= mask;
		mask >>= 2;
	}
}

void setZeroes(unsigned int &number, unsigned int start, unsigned int end)
{
	unsigned int mask = 1 <<( start-1);
	for (int i = start; i >= end; i -= 2)
	{
		number ^= mask;
		mask >>= 2;
	}
}

int main()
{
	unsigned int number = validNumber();
	unsigned int mask = 1 << BITS_OF_INT - 1;
	unsigned int count = 0;
	print(number);
	while (number&mask == 0)
	{
		count++;
		mask >>= 1;
	}
	unsigned int index = BITS_OF_INT - 1 - count;
	unsigned int mask1 = 1 << index;
	unsigned int currentBit = 1;
	unsigned int nextBit;
	unsigned int countBits = 1;
	unsigned int start = index;
	unsigned int end;
	bool OnesOrZeroes = true;
	for (int i = index; i >= 0; i--)
	{
		currentBit = ((number&mask1) ? 1 : 0);
		mask1 >>= 1;
		nextBit = ((number&mask1) ? 1 : 0);
		if (currentBit == nextBit)
		{
			countBits++;
		}
		else
		{
			end = i;
			if (OnesOrZeroes)
			{
				setZeroes(number, start, end);
			}
			else
			{
				setOnes(number, start, end);
			}
			OnesOrZeroes = !OnesOrZeroes;
			start = end - 1;
		}
	}

	print(number);

	return 0;
}