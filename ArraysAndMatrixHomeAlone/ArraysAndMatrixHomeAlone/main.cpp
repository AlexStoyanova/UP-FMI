#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

const int MAX_SIZE = 1024;
const int sizeOfInt = sizeof(int) * 8;

size_t inRange()
{
	size_t number;
	cin >> number;
	while (number < 1 || number > MAX_SIZE - 1)
	{
		cin >> number;
	}
	return number;
}

void fillArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

void printArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void randArray(int array[], size_t size)
{
	const int minLimit = -300;
	const int maxLimit = 300;
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		array[i] = (rand() % (maxLimit - minLimit)) + minLimit;
	}
}

int sumElementsInArray(int array[], size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int productElementsInArray(int array[], size_t size)
{
	int multi = 1;
	for (size_t i = 0; i < size; i++)
	{
		multi *= array[i];
	}
	return multi;
}

void minElementInArray(int array[], size_t size)
{
	int min_element = array[0];
	unsigned int index = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (min_element > array[i])
		{
			min_element = array[i];
			index = i;
		}
	}
	cout << "Index is: " << index << " " << " Element is: " << min_element << endl;
}

void maxElementInArray(int array[], size_t size)
{
	int max_element = array[0];
	unsigned int index = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (max_element < array[i])
		{
			max_element = array[i];
			index = i;
		}
	}
	cout << "Index is: " << index << " " << " Element is: " << max_element << endl;
}

bool isPrime(int number)
{
	if (number < 2)
	{
		return false;
	}
	int sqrtN = sqrt(number);
	for (int i = 2; i <= sqrtN; i++)
	{
		if (number%i==0)
		{
			return false;
		}
	}
	return true;
}

void primeElementsInArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (isPrime(array[i]))
		{
			cout << array[i] << " ";
		}
	}
}

unsigned int productOfIndexesOfOddNumbersInArray(int array[], size_t size)
{
	unsigned int multi = 1;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] % 2)
		{
			multi *= i;
		}
	}
	return multi;
}

int substraction(int array[], size_t size)
{
	int multi = 1;
	int sum = 0;
	for (size_t i = 0; i < size; i += 2)
	{
		multi *= array[i];
	}
	for (size_t i = 1; i < size; i += 2)
	{
		sum += array[i];
	}
	return multi - sum;
}

unsigned int upperBits(int number)
{
	unsigned int upper = 0;
	unsigned int mask = (1 << (sizeOfInt - 1));
	while(mask > 0)
	{
		if (number&mask)
		{
			upper++;
		}
		mask >>= 1;
	}
	return upper;
}

int sumOfNumberWithMoreUpperBits(int array[], size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (upperBits(array[i]) > sizeOfInt / 2)
		{
			sum += array[i];
		}
	}
	return sum;
}

int main()
{
	size_t n = inRange();
	int array[MAX_SIZE];
	randArray(array, n);
	printArray(array, n);
	cout << sumOfNumberWithMoreUpperBits(array, n);
	return 0;
}