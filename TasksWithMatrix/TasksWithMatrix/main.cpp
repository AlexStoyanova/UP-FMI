#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int MAX_SIZE = 10;

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
}

void randMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{

		for (size_t j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}
}

void transposedMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	int matrix_1[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			matrix_1[j][i] = matrix[i][j];
		}
	}
	printMatrix(matrix_1, m, n);
}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	unsigned int m, n;
	cin >> n >> m;
	randMatrix(matrix, n, m);
	printMatrix(matrix, n, m);
	transposedMatrix(matrix, n, m);

	return 0;
}