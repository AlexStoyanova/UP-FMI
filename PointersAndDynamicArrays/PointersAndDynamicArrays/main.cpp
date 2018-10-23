#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void fillRandArray(int *array, size_t size)
{
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 201 - 100;
	}
}

void printArray(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sortArray(int *array, size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (int j = i-1; j >= 0; j--)
		{
			if (array[j+1] < array[j])
			{
				swap(array[j+1], array[j]);
			}
		}
	}
}

void newArrays(int *array, size_t size)
{
	unsigned int count_negative = 0;
	unsigned int count_positive = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			count_negative++;
		}
	}
	count_positive = size - count_negative;
	unsigned int index1 = 0;
	unsigned int index2 = 0;
	int *new_array1 = new(nothrow) int[count_negative];
	int *new_array2 = new(nothrow) int[count_positive];
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			new_array1[index1] = array[i];
			index1++;
		}
		else
		{
			new_array2[index2] = array[i];
			index2++;
		}
	}
	sortArray(new_array1, count_negative);
	sortArray(new_array2, count_positive);
	printArray(new_array1, count_negative);
	printArray(new_array2, count_positive);
	delete[] new_array1;
	delete[] new_array2;
}

int main()
{
	unsigned int n;
	cin >> n;
	int *array = new(nothrow) int[n];
	fillRandArray(array, n);
	printArray(array, n);
	newArrays(array, n);
	delete[] array;
	return 0;
}