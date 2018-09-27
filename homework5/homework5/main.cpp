#include <iostream>
using namespace std;

void printArr(int arr[], size_t size)
{

	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << "\n\n";

}

void selectionSort(int arr[], size_t size)
{

	int minIndex;

	for (size_t i = 0; i < size - 1; i++)
	{

		minIndex = i;

		for (size_t j = i + 1; j < size; j++)
		{

			if (arr[minIndex] > arr[j])
				minIndex = j;

		}

		if (minIndex != i)
		{
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
}

int main()
{
	unsigned int N;
	size_t size = N;
	cout << "Enter N: ";
	cin >> N;
	int* array = new (nothrow) int[N];
	if (array == nullptr)
	{
		cout << "Error: memory could not be allocated";
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			cout << "Enter number: ";
			cin >> array[i];
		}
	}
	selectionSort(array, size);
	printArr(array, size);





	return 0;
}