#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void fillRandArray(int *array, size_t size)
{
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 899 + 100;
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

void allOddNumbers(unsigned int *array, size_t size, unsigned int k, unsigned int m)
{
	for (size_t i = 0; i < size; i++)
	{
		if ((array[i] < k || array[i] > m) && (array[i] % 2 != 0))
		{
			cout << array[i] << ' ';
		}
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sortArray(int *array, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}

int posNumber(int *array, size_t size, unsigned int k)
{
	size_t i = 0;
	size_t count = 0;
	sortArray(array, size);
	while(count != k)
	{
		if (array[i] != array[i + 1])
		{
			count++;
		}
		i++;
	}
	return array[i - 1];
}

int main()
{
	unsigned int n, k;
	cin >> n >> k;
	//unsigned int k, m;
	//cin >> k >> m;
	int *array = new(nothrow) int[n];
	fillRandArray(array, n);
	cout << posNumber(array, n, k) << endl;
	printArray(array, n);
	//allOddNumbers(array, n, k, m);






	delete[] array;
	return 0;
}