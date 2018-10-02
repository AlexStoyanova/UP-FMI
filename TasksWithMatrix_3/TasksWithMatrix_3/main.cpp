#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

const int MAX_SIZE = 16;

void fillMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void randomElementInMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	srand ((unsigned int)time(NULL));
	cout << matrix[rand() % n][rand() % m];
}

void printArray(int array[], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void fromMatrixToArray(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	int array[1024];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			array[i*m + j] = matrix[i][j];
		}
	}
	printArray(array, n*m);
}

bool isPrime(int number)
{
	if (number < 2)
	{
		return false;
	}
	int sqrtN = (int)(sqrt(number));
	for (int i = 2; i <= sqrtN; i++)
	{
		if (number%i == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned int isEven()
{
	unsigned int number;
	do
	{
		cin >> number;
	} while (number < 3 || number % 2);
	return number;
}

void sumPrimeNumbers(unsigned int number)
{
	size_t half_number = number / 2;
	for (size_t i = 0; i <= half_number; i++)
	{
		if (isPrime(half_number + i) && isPrime(half_number - i))
		{
			cout << half_number + i << " + " << half_number - i << " = " << number << endl;
		}
	}

}

int main()
{

	//int matrix[MAX_SIZE][MAX_SIZE];
	//size_t n;
	//size_t m; 
	//cin >> n >> m;
	//fillMatrix(matrix, n, m);
	//printMatrix(matrix, n, m);
	//randomElementInMatrix(matrix, n, m);
	//fromMatrixToArray(matrix, n, m);
	unsigned int number = isEven();
	sumPrimeNumbers(number);
	return 0;
}