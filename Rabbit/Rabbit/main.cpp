#include <iostream>
using namespace std;

void clear(int **ptr, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		delete[] ptr[i];
	}
	delete[] ptr;
}


void printMatrix(int **matrix, size_t n, size_t m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	unsigned int n, m;
	cin >> n >> m;
	int **matrix = new(nothrow) int*[n];
	if (matrix != nullptr)
	{
		for (int i = 0; i < n; i++)
		{
			matrix[i] = new(nothrow) int[m];
			if (matrix[i] == nullptr)
			{
				clear(matrix, i);
				return -1;
			}
		}
	}
	else
	{
		return -1;
	}

	for (int i = 0; i < m; i++)
	{
		matrix[0][i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		matrix[i][0] = 1;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			matrix[i][j] = matrix[i][j - 1] + matrix[i - 1][j];
		}
	}
	printMatrix(matrix, n, m);
	
	clear(matrix, n);
	return 0;
}