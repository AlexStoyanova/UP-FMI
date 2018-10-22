#include <iostream>
using namespace std;

void fillArray(int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void printArray(int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void positiveAndNegative(int *arr, size_t size)
{
	unsigned int count_positive = 0;
	unsigned int count_negative = 0;
	unsigned int count_zeroes = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			count_positive++;
		}
		else if (arr[i] < 0)
		{
			count_negative++;
		}
		else
		{
			count_zeroes++;
		}
	}
	cout << "Positive numbers: " << count_positive << endl;
	cout << "Negative numbers: " << count_negative << endl;
	cout << "Zero numbers: " << count_zeroes << endl;
}

void pushBack(int *&arr, size_t &size, int number)
{
	int *new_arr = new(nothrow) int[size + 1];
	if (new_arr != nullptr)
	{
		for (size_t i = 0; i < size; i++)
		{
			new_arr[i] = arr[i];
		}
		new_arr[size] = number;
		delete[] arr;
		size++;
		arr = new_arr;
	}
}

void pushFront(int *&arr, size_t &size, int number)
{
	int *new_arr = new int[size + 1];
	if (new_arr != nullptr)
	{
		for (size_t i = 0; i < size; i++)
		{
			new_arr[i + 1] = arr[i];
		}
		new_arr[0] = number;
		delete[] arr;
		size++;
		arr = new_arr;
	}
}

int main()
{
	unsigned int n;
	cin >> n;
	int *array = new(nothrow) int[n];
	if (array != nullptr)
	{
		fillArray(array, n);
		printArray(array, n);
		//positiveAndNegative(array, n);
	}
	else
	{
		return 0;
	}
	pushFront(array, n, 8);
	pushBack(array, n, 37);
	printArray(array, n);

	delete[] array;
	return 0;
}