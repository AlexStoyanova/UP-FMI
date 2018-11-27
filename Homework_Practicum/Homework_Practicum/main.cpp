#include <iostream>
using namespace std;

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
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

int main()
{
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

	const int SIZE = 100;
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
	cout << count << endl;

	return 0;
}