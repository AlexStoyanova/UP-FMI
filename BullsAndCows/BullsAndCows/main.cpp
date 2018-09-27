#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

unsigned int countDigitInNumber(unsigned int userNumber, unsigned int digit);

bool digitExistsInNumber(unsigned int userNumber, unsigned int digit)
{
	return countDigitInNumber(userNumber, digit);
}

unsigned int countDigitInNumber(unsigned int userNumber, unsigned int digit)
{
	unsigned int count = 0;
	while (userNumber > 0)
	{
		if ((userNumber % 10) == digit)
		{
			count++;
		}
		userNumber /= 10;
	}
	return count;
}

unsigned int Bulls(unsigned int userNumber, unsigned int randomNumber)
{
	unsigned int sum = 0;
	while (userNumber > 0)
	{
		if ((userNumber % 10) == (randomNumber % 10))
			sum++;
		userNumber /= 10;
		randomNumber /= 10;
	}
	return sum;
}

unsigned int Cows(unsigned int userNumber, unsigned int randomNumber)
{
	unsigned int sum = 0;
	for (unsigned int i = 0; i < 10; i++)
	{
		if (digitExistsInNumber(userNumber, i))
		{
			sum += countDigitInNumber(randomNumber, i);
		}
	}
	return sum;
}

int main()
{
	unsigned int n;
	unsigned int userNumber;
	unsigned int bulls;
	unsigned int cows;
	cin >> n;
	while ((n < 1) || (n > 19))
	{
		cin >> n;
	}
	unsigned int minLimit = pow(10, n - 1);
	unsigned int maxLimit = pow(10, n) - 1;
	srand(time(NULL));
	unsigned int randomNumber = (rand() % (maxLimit - minLimit)) + minLimit;
	do {
		cout << "Enter user number: ";
		cin >> userNumber;
		if (!(userNumber >= minLimit && userNumber <= maxLimit))
		{
			cout << "Stupid!!!!!!!!!" << endl;
			continue;
		}
		
		bulls = Bulls(userNumber, randomNumber);
		cows = Cows(userNumber, randomNumber);
		cout << "Bulls: " << bulls << endl;
		cout << "Cows: " << cows << endl;

	} while (userNumber != randomNumber);

	cout << "Number: " << randomNumber << endl;

	return 0;
}