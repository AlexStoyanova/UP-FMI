#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

bool isPrime(unsigned int number)
{
	if (number < 2)
	{
		return false;
	}
	int sqrt_num = (int)sqrt(number);
	for (int i = 2; i <= sqrt_num; i++)
	{
		if ((number % i) == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned int sumDigitsInNumber(unsigned int number)
{
	unsigned int sum = 0;
	while (number)
	{
		sum += (number % 10);
		number /= 10;
	}
	return sum;
}

void fillArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

void fillMatrix(int matrix[][MAX_SIZE], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cin >> *(*(matrix + i) + j);
		}
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void insertionSort(int array[], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (int j = i; j >=0; j--)
		{
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
			}
		}
	}
}

bool isSubset(int array1[], int array2[], size_t size1, size_t size2)
{
	unsigned int count = 0;
	for (size_t i = 0; i < size1; i++)
	{
		for (size_t j = 0; j < size2; j++)
		{
			if (array1[i] == array2[j])
			{
				count++;
				break;
			}
		}
	}
	if (count == size1)
	{
		return true;
	}
	return false;
}

int main()
{
	//1.
	/*unsigned int a, b;
	do
	{
		cout << "Enter a: " << endl;
		cin >> a;
	} while (a < 0 || a > 1024);
	do
	{
		cout << "Enter b: " << endl;
		cin >> b;
	} while ((b < 0) || (b > 1024) || (b == a) || (b < a));
	unsigned int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (isPrime(i) && isPrime(sumDigitsInNumber(i)))
		{
			cout << i << ' ';
		}
	}*/

	//2.
	/*const int SIZE = 100;
	unsigned int n;
	do
	{
		cin >> n;
	} while (n <= 0 || n >= 100);
	int matrix[SIZE][SIZE];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int temp = n*n;
	int *buff = new(nothrow) int[temp];
	for (int i = 0; i < temp; i++)
	{
		buff[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buff[matrix[i][j] - 1]++;
		}
	}
	bool isSudoku = true;
	for (int i = 0; i < temp; i++)
	{
		if (buff[i] == 0)
		{
			isSudoku = false;
		}
	}
	if (isSudoku)
	{
		cout << "Su-do-ku!" << endl;
	}
	else
	{
		cout << "Is NOT a su-do-ku!" << endl;
	}
	delete[] buff;*/

	//3.
	/*const int SIZE = 100;
	unsigned int N, M;
	int A[SIZE];
	int B[SIZE];
	do
	{
		cout << "Enter N: ";
		cin >> N;
	} while (N <= 0 || N >= 100);
	cout << "Enter array A: " << endl;
	fillArray(A, N);
	do
	{
		cout << "Enter M: ";
		cin >> M;
	} while (M <= 0 || M >= 100);
	cout << "Enter array B: " << endl;
	fillArray(B, M);
	unsigned int count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < M; j++)
		{
			if (A[i] == B[j])
			{
				count++;
			}
		}
	}
	cout << count << endl;*/

	//4.
	/*const int SIZE = 100;
	unsigned int N, M;
	int A[SIZE];
	int B[SIZE];
	cout << "Enter N: ";
	cin >> N;
	cout << "Enter array A: " << endl;
	fillArray(A, N);
	cout << "Enter M: ";
	cin >> M;
	cout << "Enter array B: " << endl;
	fillArray(B, M);
	if (isSubset(A, B, N, M) && isSubset(B, A, M, N))
	{
		cout << "YES!" << endl;
	}
	else
	{
		cout << "NO!" << endl;
	}*/
	
	//6.
	/*const int SIZE = 100;
	unsigned int N;
	do
	{
		cout << "Enter N: ";
		cin >> N;
	} while (N <= 0 || N >= 100);
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	cout << "Enter matrix A: " << endl;
	fillMatrix(A, N);
	cout << "Enter matrix B: " << endl;
	fillMatrix(B, N);
	int C[SIZE][SIZE] = { 0, };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				*(*(C + i) + j) += (*(*(A + i) + k) * *(*(B + k) + j));
			}
		}
	}
	cout << "The new matrix is: " << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << *(*(C + i) + j) << ' ';
		}
		cout << endl;
	}*/


	return 0;
}