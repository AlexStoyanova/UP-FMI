#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

const int SIZE = 25;
const int MAX_SIZE = SIZE*2;
const size_t bitsInInt = sizeof(int) * 8;
const unsigned int lowerLimit = 5;
const unsigned int upperLimit = 25;

//Arguments in this function are an array and size of array
//This function fill the array with elements 
void fillArray(int array[], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		cin >> array[i];
	}
}

//Arguments in this function are an array and size of array
//this function uses for loop to go through array and prints each element
void printArray(int array[], size_t n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << i << " - " << array[i] << endl;
	}
	cout << endl;
}

//This function has no arguments
//we use it to enter number in the interval we want
//when we enter number in this interval, the function returns this number 
size_t valueInRange() 
{
	size_t n;
	cin >> n;
	while (n > SIZE || n < 5)
	{
		cin >> n;
	}
	return n;
}

//Arguments in this function are an array and size of this array
//this function select random numbers for the array
void randArray(int array[], size_t n)
{
	const int minLimit = -300;
	const int maxLimit = 300;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = (rand() % (maxLimit - minLimit)) + minLimit;
	}
}

//Arguments in this function are an array and size of the array
//we use this function to sum all elements in the array
int sumArray(int array[], size_t n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

//Arguments in this function are an array and size of the array
//this function multiplies the elements in the array
int multiArray(int array[], size_t n)
{
	int multi = 1;
	for (int i = 0; i < n; i++)
	{
		multi *= array[i];
	}
	return multi;
}

//Arguments in this function are an array and size of the array
//this function prints elements in the array in reverse order
void printArrayReverse(int array[], size_t n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
}

//Arguments in this function are an array and size of the array
//this function finds the maximum element in the array and returns it
int maxValue(int array[], size_t n)
{
	int max_element = array[0];
	for (size_t i = 1; i < n; i++)
	{
		if (max_element < array[i])
		{
			max_element = array[i];
		}
	}
	return max_element;
}

//Arguments in this function are an array and size of the array
//this function finds the munimum element in the array and returns it
int minValue(int array[], size_t n)
{
	int min_element = array[0];
	for (size_t i = 1; i < n; i++)
	{
		if (min_element > array[i])
		{
			min_element = array[i];
		}
	}
	return min_element;
}

//Argument in this function is the number we want to know if it is prime or not
//first we check if it is smaller than 2 because negative numbers, 0 and 1 are not prime
//than we use "for" loop to check if the number has different divisors from 1 and itself 
//if it has, the function returns false, else returns true
bool isPrime(int number)
{
	if (number < 2)
	{
		return false;
	}
	unsigned int sqrt1 = sqrt(number);
	for (int i = 2; i <= sqrt1; i++)
	{
		if(number%i==0)
		{ 
			return false;
		}
	}
	return true;
}

//Arguments in this function are an array and size of the array
//this function checks if number in the array is prime or not
void primeArray(int array[], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (isPrime(array[i]))
		{
			cout << array[i] << " ";
		}
	}
}

//Arguments in this function are an array and size of the array
//this function checks if an element of the array is odd or even 
//if it is odd, function multiplies indexes of this elements
unsigned int productOfIndexOfArray(int array[], size_t n)
{
	unsigned int multi = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (array[i] % 2 != 0)
		{
			multi *= i;
		}
	}
	return multi;
}

//Arguments in this function are an array and size of the array
//this function multiplies elements of even indexes and sums elements of odd indexes
//than substracts them and return this substraction
int substraction(int array[], size_t n)
{
	int sum = 0;
	int multi = 1;
	for (size_t i = 0; i < n; i += 2)
	{
		multi *= array[i];
	}
	for (size_t i = 1; i < n; i += 2)
	{
		sum += array[i];
	}
	return multi - sum;
}

//Argument in this function is a number we entered
//this function checks how many are the upper bits in a number 
//returns sum of the upper bits
unsigned int countUpperBits(int number)
{
	unsigned int upper_bits = 0;
	unsigned int mask = (1 << (bitsInInt - 1));
	while (mask > 0)
	{
		if (number&mask)
		{
			upper_bits++;
		}
		mask >>= 1;
	}
	return upper_bits;
}

//Arguments in this function are an array and size of the array
//this function checks how many upper bits has each number in array 
//if they are more than lower bits, sum these elements and returns the sum
int sumNumbersWithMoreUpperBits(int array[], size_t n)
{
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (countUpperBits(array[i]) > bitsInInt / 2)
		{
			sum += array[i];
		}
	}
	return sum;
}

//Argument in this function is a number that we enter
//this function checks how many times a digit exists in the number we entered
//then saves the result in array and prints this array
void countDigits(unsigned int number)
{
	int array[10] = { };
	while (number)
	{
		array[number % 10]++;
		number /= 10;
	}
	printArray(array, 10);
}

//Arguments in this function are an array and size of the array
//this function "delete" the array i.e. in each box enters 0
void deleteArray(int array[], unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
}

//Arguments in this function are an array and size of the array
//the function uses two nested loops to remove zeroes from the array 
//also we use & to take the actual size of our array not a copy
//than we decrease the size according the zeroes we removed
void removeZeroes(int array[], size_t& size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			for (size_t j = i + 1; j < size; j++)
			{
				array[j - 1] = array[j];
			}
			size--;
		}
	}
}

//Arguments in this function are an array and size of the array
//
bool zigzagArray(int array[], size_t size)
{
	if (size < 3)
	{
		return false;
	}
	for (unsigned int i = 0; i < size - 1; i++)
	{
		if (!(i % 2))
		{
			if (array[i] >= array[i + 1])
			{
				return false;
			}
		}
		
		else 
		{
			if (array[i] <= array[i + 1])
			{
				return false;
			}
				
		}
	}
	return true;
}

//Arguments in this function are two elements 
//we use & bcs we want their actual value not a copy of them
//than we use third variable to swap a to b and b to a 
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

////Arguments in this function are an array and size of the array
//this function uses two nested loops to sort elements of array in increasing order 
void selectionSort(int array[], size_t size)
{
	unsigned int minIndex;
	
	for (size_t i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (size_t j = i+1; j < size; j++)
		{
			if (array[minIndex] > array[j])
			{
				minIndex = j;
			}
		}
		swap(array[i], array[minIndex]);
	}
}

//Arguments in this function are an array and size of the array
//this function sorts elements of array in increasing order
void bubbleSort(int array[], size_t size)
{
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1]) 
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}

void insertNumbersInArray(int array[], size_t& size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			for (size_t j = size; j > i; j--)
			{
				array[j] = array[j - 1];
			}

			size++;
			array[i+1] = pow(array[i], 2);
			i++;
		}
	}
}

int main()
{
	size_t n = valueInRange();
	int array[MAX_SIZE] = { 0 };
	
	fillArray(array, n);
	insertNumbersInArray(array, n);
	//selectionSort(array, n);
	//removeZeroes(array, n);
	//deleteArray(array, n);
	//cout << ((zigzagArray(array, n)) ? "True!" : "False!");
	//randArray(array, n);
	printArray(array, n);
	//cout << sumArray(array, n) << endl;
	//cout << multiArray(array, n) << endl;
	//printArrayReverse(array, n);
	//cout << minValue(array, n) << endl;
	//primeArray(array, n);
	//cout << sumNumbersWithMoreUpperBits(array, n) << endl;
	//unsigned int num;
	//cin >> num;
	//countDigits(num);

	return 0;
}