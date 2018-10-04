#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int MAX_SIZE = 16;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	int r = b;
	while (a%b)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return r;
}

unsigned int Oiler(unsigned int number)
{
	unsigned int count = 0;
	for (size_t i = 1; i < number; i++)
	{
		if (gcd(i, number) == 1)
		{
			count++;
		}
	}
	return count;
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
}


void randMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % MAX_SIZE;
		}
	}
}



void spiralIterationOfMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		
		for (size_t j = 0; j < m; j++)
		{
			if (i % 2 == 0)
			{
				cout << matrix[i][j] << " ";
			}
			else
			{
				cout << matrix[i][m - 1 - j] << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	/*unsigned int number;
	cin >> number;
	cout << Oiler(number) << endl;*/
	int matrix[MAX_SIZE][MAX_SIZE];
	unsigned int n;
	unsigned int m;
	cin >> n >> m;
	randMatrix(matrix, n, m);
	printMatrix(matrix, n, m);
	cout << endl;
	spiralIterationOfMatrix(matrix, n, m);




	return 0;
}