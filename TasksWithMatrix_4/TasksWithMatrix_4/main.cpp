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

void addressOfCellsInMatrix(int matrix[][MAX_SIZE], size_t n, size_t m)
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

void printArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void addressOfCellsInArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << &array[i] << " ";
	}
}

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void insertionSort(int array[], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (size_t j = i; j > 0 && array[j] < array[j - 1]; j--)
		{
				swap(array[j], array[j-1]);
		}
	}
}

void cutOfArrays(int array_A[], int array_B[], size_t size_A, size_t size_B)
{
	int array_C[MAX_SIZE];
	size_t k = 0;
	for (size_t i = 0; i < size_A; i++)
	{
		for (size_t j = 0; j < size_B; j++)
		{
			if (array_A[i] == array_B[j])
			{
				array_C[k] = array_A[i];
				k++;
			}
		}
	}
	insertionSort(array_C, k);
	printArray(array_C, k);
}

void subtractionOfArrays(int array_A[], int array_B[],int array_C[], size_t size_A, size_t size_B, size_t& k)
{
	bool outArray = true;
	for (size_t i = 0; i < size_A; i++)
	{
		for (size_t j = 0; j < size_B; j++)
		{
			if (array_A[i] == array_B[j])
			{
				outArray = false;
			}
		}
		if (outArray)
		{
			array_C[k] = array_A[i];
			k++;
		}
		outArray = true;
	}
	insertionSort(array_C, k);
}

void unionOfArrays(int array_A[], int array_B[], size_t size_A, size_t size_B)
{
	int array_C[MAX_SIZE*2];
	size_t k = 0;
	for (size_t i = 0; i < size_A; i++)
	{
		array_C[k] = array_A[i];
		k++;
	}
	subtractionOfArrays(array_B, array_A, array_C, size_B, size_A, k);
	printArray(array_C, k);
}

void xorOfArrays(int array_A[], int array_B[], size_t size_A, size_t size_B)
{
	int array_C[MAX_SIZE*2];
	size_t k = 0;
	subtractionOfArrays(array_A, array_B, array_C, size_A, size_B, k);
	subtractionOfArrays(array_B, array_A, array_C, size_B, size_A, k);
	printArray(array_C, k);
}


void rotationInLeft(int array[], size_t size)
{
	int firstValue = array[0];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = array[i + 1];
	}
	array[size - 1] = firstValue;
	printArray(array, size);
}

void rotationInRight(int array[], size_t size)
{
	int lastValue = array[size - 1];
	for (int i = size - 1; i >= 0; i--)
	{
		array[i] = array[i - 1];
	}
	array[0] = lastValue;
	printArray(array, size);
}

int main()
{
	//Address in each cell in array

	/*int array[MAX_SIZE];
	unsigned int n;
	cout << "Enter size of array: " << endl;
	cin >> n;
	cout << "Fill cells of array with integer numbers: " << endl;
	fillArray(array, n);
	addressOfCellsInArray(array, n);*/

	//Address in each cell in matrix

	/*int matrix[MAX_SIZE][MAX_SIZE];
	unsigned int n, m;
	cout << "Enter size of rows and cols of matrix: " << endl;
	cin >> n >> m;
	cout << "Fill cells of matrix with integer numbers: " << endl;
	fillMatrix(matrix, n, m);
	addressOfCellsInMatrix(matrix, n, m);*/

	//Cut of arrays

	/*int array[MAX_SIZE];
	int array2[MAX_SIZE];
	unsigned int n, m;
	cout << "Enter size of first array and second array: " << endl;
	cin >> n >> m;
	cout << "Fill cells of arrays with integer numbers: " << endl;
	fillArray(array, n);
	fillArray(array2, m);
	cutOfArrays(array, array2, n, m);*/

	//Union of arrays

	/*int array[MAX_SIZE];
	int array2[MAX_SIZE];
	unsigned int n, m;
	cout << "Enter size of first array and second array: " << endl;
	cin >> n >> m;
	cout << "Fill cells of arrays with integer numbers: " << endl;
	fillArray(array, n);
	fillArray(array2, m);
	unionOfArrays(array, array2, n, m);*/

	//Substraction of arrays

	/*int array[MAX_SIZE];
	int array2[MAX_SIZE];
	int array3[MAX_SIZE*2];
	unsigned int n, m;
	unsigned int k = 0;
	cout << "Enter size of first array and second array: " << endl;
	cin >> n >> m;
	cout << "Fill cells of arrays with integer numbers: " << endl;
	fillArray(array, n);
	fillArray(array2, m);
	subtractionOfArrays(array, array2, array3, n, m, k);
	printArray(array3, k);*/
	
	
	//Xor of arrays

	/*int array[MAX_SIZE];
	int array2[MAX_SIZE];
	unsigned int n, m;
	cout << "Enter size of first array and second array: " << endl;
	cin >> n >> m;
	cout << "Fill cells of arrays with integer numbers: " << endl;
	fillArray(array, n);
	fillArray(array2, m);
	xorOfArrays(array, array2, n, m);*/
	
	//Rotation arrays in left and in right

	/*int array[MAX_SIZE];
	unsigned int n;
	int rotation;
	cout << "Enter size of array: " << endl;
	cin >> n;
	fillArray(array, n);
	cout << "Enter number of rotations: " << endl;
	cin >> rotation;
	if (rotation == 0 || rotation == n || rotation%n == 0)
	{
		printArray(array, n);
	}
	else if (rotation > 0)
	{
		while (rotation != 0 && rotation%n)
		{
			rotationInRight(array, n);
			rotation--;
		}
	}
	else
	{
		int absValue = abs(rotation) % n;
		while (rotation != 0 && absValue)
		{
			rotationInLeft(array, n);
			rotation++;

		}
	}*/
	return 0;
}