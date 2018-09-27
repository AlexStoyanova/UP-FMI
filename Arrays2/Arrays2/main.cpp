#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int MAX_SIZE = 20;

//This function has no arguments
//With it we enter numbers until the number isn't in the interval we want 
//When the number is in the interval we return it
unsigned int validNumber()
{
	unsigned int number;
	cin >> number;
	while (number > MAX_SIZE - 1 || number < 0)
	{
		cin >> number;
	}
	return number;
}

//Arguments in this function are matrix, size of columns and size of rows
//with two nested loops we fill the matrix by rows and columns
void fillArray(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

//Arguments in this function are matrix, size of rows, size of columns
//this function fill matrix with random elements
//this elements are in interval that we choose
void randArray(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	const int minLimit = -300;
	const int maxLimit = 300;
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			matrix[i][j] = (rand() % (maxLimit - minLimit)) + minLimit;
		}	
	}
}

//Arguments in this function are array and size of array
//this function prints the array elements in reverse order
void printArrayReverse(unsigned int array[], size_t size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

//Arguments in this function are matrix, size of columns and size of rows 
//this function prints the matrix elements 
void printArray(int array[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

//Argument in this function is the number of which we will count the digits
//we use an array to record the discovered digits 
//then we use the function which we already have and prints the array 
void digitsInNumber(unsigned int number)
{
	int array[10] = { 0 };
	while (number)
	{
		array[number % 10]++;
		number /= 10;
	}
	//printArray(array, 10);
}

//Arguments in this function are two elements
//this function uses third variable to swap two elements 
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//Arguments in this function are array and size of this array
//we use two nested loops to sort elements in this array
void insertionSort(int array[], size_t size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && (array[j] < array[j - 1]); j--)
		{
			swap(array[j], array[j - 1]);
		}
	}
}
//Arguments on function are an array, size and number which we searching
//with for loop we go through array and compare current emement with our number
//if they equal return current element index
//if we don't find such element - return -1
int linearSearching(int array[], size_t size, int number)
{
	cout << number << endl;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == number)
		{
			return i;
		}
	}
	return -1;
}

//Arguments in this function are a sorted array, size of array and number which we are searching
//we use limits to record minimum and maximum index of array
//with while loop we find out the medium element and compare it with our number 
//when we find it, function returns the index of element in array, if we didn't find it, function returns -1
int binarySearching(int array[], size_t size, int number)
{
	unsigned int min = 0;
	unsigned int max = size - 1;
	unsigned int mid;
	while (min <= max)
	{
		mid = (max + min) / 2;
		cout << "mid: " << mid << endl;
		if (array[mid] < number)
		{
			min = mid + 1;
		}
		else if (array[mid] > number)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//Arguments in this function are a matrix, size of cols and size of rows
//this function search and find the minimum element of the matrix
//with two nested loops we go through the elements in the matrix and compare each element with current minimum element 
//the function returns minimum element of the matrix
int minElementInMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	int min_element = matrix[0][0];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (min_element > matrix[i][j])
			{
				min_element = matrix[i][j];
			}
		}
	}
	return min_element;
}

//Arguments in this function are a marix, size of cols and size of rows, and number with which we will multiply our matrix
//function uses two nested loops to go through each element of matrix and multiply it with the scalar 
void multiMatrixWithScalar(int matrix[][MAX_SIZE], size_t n, size_t m, int scalar)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			matrix[i][j] *= scalar;
		}
	}
}

void fillNumberInArray(unsigned int array[], unsigned int number)
{
	unsigned int i = 0;
	while (number!=0)
	{
		array[i++] = number % 10;
		number /= 10;
	}
}


void sumOfArraysWithNumbers(unsigned int num1[], unsigned int num2[], size_t size)
{
	bool carry = false;
	unsigned int result = 0;
	for (size_t i = 0; i < size; i++)
	{
		result = ((carry) ? num1[i] + num2[i] + 1 : num1[i] + num2[i]);
		carry = (result > 9);
		num1[i] = result % 10;
	}
}

int main()
{
	const size_t size = 30;
	const unsigned int NUM = (1 << 26); // 16 777 216
	unsigned int res[size] = { 0 };
	unsigned int num[size] = { 0 };



	for (size_t i = 0; i < NUM; i++)
	{
		fillNumberInArray(num, i);
		sumOfArraysWithNumbers(res, num, size);
	}


	printArrayReverse(res, size);

	//int matrix[MAX_SIZE][MAX_SIZE];
	//unsigned int n = validNumber();
	//unsigned int m = validNumber();
	//randArray(matrix, n , m);
	//printArray(matrix, n, m);

	//cout << minElementInMatrix(matrix, n, m) << endl;
	//fillArray(array, size);
	//int number;
	//cin >> number;
	//multiMatrixWithScalar(matrix, n, m, number);
	//printArray(matrix, n, m);
	//cout << number << endl;
	//digitsInNumber(number);
	//insertionSort(array, size);
	//printArray(array, size);
	//cout << binarySearching(array, size, number) << endl;
	//printArray(array, size);


	return 0;
}