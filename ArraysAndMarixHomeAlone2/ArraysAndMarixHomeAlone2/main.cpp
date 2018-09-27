#include <iostream>
using namespace std;

const int MAX_SIZE = 20;


void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int array[], size_t size)
{
	unsigned int min_element;
	for (size_t i = 0; i < size - 1; i++)
	{
		min_element = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[min_element] > array[j])
			{
				min_element = j;
			}
		}
		swap(array[i], array[min_element]);
	}
}

void bubbleSort(int array[], size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
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

void insertionSort(int array[], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (size_t j = i; j > 0; j--)
		{
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
			}
		}
	}
}

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

unsigned int valueInRange()
{
	int number;
	cin >> number;
	while (number < 1 || number > 1023)
	{
		cin >> number;
	}
	return number;
}

void sumOfMatrixes(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			matrix1[i][j] += matrix2[i][j];
		}
	}
	printMatrix(matrix1, n, m);

}

void compactNewMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
{
	for (size_t row = 0; row < n; row++)
	{
		for (size_t col = 0; col < m; col++)
		{
			if ((row == 0 || row == n - 1) || (col == 0 || col == m - 1))
			{
				cout << matrix[row][col] << " ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	int matrix2[MAX_SIZE][MAX_SIZE];
	unsigned int n = valueInRange();
	unsigned int m = valueInRange();
	fillMatrix(matrix, n, m);
	//fillMatrix(matrix2, n, m);
	//sumOfMatrixes(matrix, matrix2, n, m);
	compactNewMatrix(matrix, n, m);

	return 0;
}