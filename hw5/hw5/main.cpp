#include <iostream>
using namespace std;

void printArr(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";
}


void selectionSort(int arr[], size_t size)
{

	int maxIndex;
	for (size_t i = 0; i < size - 1; i++)
	{

		maxIndex = i;

		for (size_t j = i + 1; j < size; j++)
		{

			if (arr[maxIndex] < arr[j])
				maxIndex = j;

		}

		if (maxIndex != i)
		{
			int temp = arr[maxIndex];
			arr[maxIndex] = arr[i];
			arr[i] = temp;
		}
	}
}

int main()
{
	unsigned int N;
	cout << "Enter N: ";
	cin >> N;
	int* array = new (nothrow) int[N];
	if (array == nullptr)
	{
		cout << "Error: memory could not be allocated";
	}
	else
	{
		cout << "Enter numbers: ";
		for (size_t i = 0; i < N; i++)
		{
			cin >> array[i];
		}
	}
	
	selectionSort(array, N);
	printArr(array, N);

	return 0;
}