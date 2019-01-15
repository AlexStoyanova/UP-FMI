#include <iostream>
using namespace std;

const int SIZE = 100;

bool isEven(int number)
{
	return number % 2 == 0;
}

bool isInNum(int number, int k)
{
	while (number)
	{
		if (number % 100 == k)
		{
			return true;
		}
		number /= 10;
	}
	return false;
}

int* filter(int *arr, size_t size, size_t boys, size_t girls, bool(*ptrEven)(int), bool(*ptrIsIn)(int, int), size_t &len)
{
	unsigned int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptrIsIn(arr[i], 81))
		{
			count++;
		}
	}
	len = size - count;
	int *newArr = new(nothrow) int[len];
	if (newArr != nullptr)
	{
		unsigned int j = 0;
		for (int i = 0; i < size && j < len; i++)
		{
			if (!ptrIsIn(arr[i], 81) && ptrIsIn(arr[i], 42))
			{
				newArr[j] = arr[i];
				j++;
			}
		}
		if (j < len)
		{
			for (int i = 0; i < size && j < len; i++)
			{
				if (!ptrIsIn(arr[i], 81) && (!ptrIsIn(arr[i], 42)))
				{
					newArr[j] = arr[i];
					j++;
				}
			}
		}
	}
	return newArr;
}

int main()
{
	unsigned int n;
	unsigned int boys;
	unsigned int girls;
	int array[SIZE];
	cin >> n >> boys >> girls;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	unsigned int len = 0;
	int *ptr = filter(array, n, boys, girls, isEven, isInNum, len);
	unsigned int giftsForGirls = 0;
	unsigned int giftsForBoys = 0;
	for (int i = 0; i < len; i++)
	{
		if (isEven(ptr[i]))
		{
			giftsForGirls++;
		}
		else
		{
			giftsForBoys++;
		}
	}
	cout << "Gifts for boys: " << giftsForBoys << endl << "Gifts for girls: " << giftsForGirls << endl;
	delete[] ptr;


	return 0;
}