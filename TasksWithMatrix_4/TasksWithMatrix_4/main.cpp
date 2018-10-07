#include <iostream>
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

void adressOfCellsInMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << &matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void fillArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

void adressOfCellsInArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << &array[i] << " ";
	}
}

int main()
{
	int array[MAX_SIZE];
	unsigned int n;
	cin >> n;
	fillArray(array, n);
	adressOfCellsInArray(array, n);


	return 0;
}