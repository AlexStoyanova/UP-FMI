#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void fillRandArray(unsigned int *array, size_t size)
{
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 899 + 100;
	}
}
void printArray(unsigned int *array, size_t size)
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


int main()
{
	unsigned int n;
	cin >> n;
	unsigned int k, m;
	cin >> k >> m;
	unsigned int *array = new(nothrow) unsigned int[n];
	fillRandArray(array, n);
	printArray(array, n);
	allOddNumbers(array, n, k, m);






	delete[] array;
	return 0;
}