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

int main()
{
	unsigned int n;
	cin >> n;
	int *array = new int[n];
	fillArray(array, n);
	printArray(array, n);
	positiveAndNegative(array, n);
	delete[] array;




	return 0;
}