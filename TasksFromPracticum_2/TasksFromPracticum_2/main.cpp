#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void insertionSort(int *array, size_t size)
{
	for (int i = 1; i < size - 1; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (array[j] < array[j - 1])
			{
				swap(array[j], array[j - 1]);
			}
		}
	}
}

int main()
{
	/*
	unsigned int n;
	cin >> n;
	unsigned long long int sum = 0;
	unsigned int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum;
	*/

	/*
	unsigned int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	insertionSort(array, n);
	cout << array[0] << ' ' << array[n - 1];
	delete[] array;
	*/

	/*
	unsigned int n;
	cin >> n;
	int *array = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < n; i++)
	{
		if ((array[i] % 3) == 0)
		{
			cout << array[i] << ' ';
			count++;
		}
	}
	cout << endl <<  count;
	delete[] array;
	*/

	/*
	const int SIZE = 10;
	int n;
	cin >> n;
	int array[SIZE];
	int i = 0;
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		array[i] = n % 10;
		n /= 10;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << array[j] << ' ';
	}
	cout << endl << sum;
	*/
	
	/*
	unsigned int n;
	cin >> n;
	double *array = new double[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	for (int j = n - 1; j >= 0; j--)
	{
		cout << array[j] << ' ';
	}

	delete[] array;
	*/

	/*
	unsigned int n;
	cin >> n;
	double *array = new double[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < n/2; i++)
	{
		swap(array[i],array[n - i - 1]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << ' ';
	}
	delete[] array;
	*/
	
	/*
	unsigned int n;
	int k, m;
	cin >> n >> k >> m;
	int *array = new int[n];
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (!(array[i] >= k && array[i] <= m))
		{
			flag = false;
			break;
		}
	}
	cout << ((flag) ? "True" : "False") << endl;
	*/
	
	/*
	const int MAX_SIZE = 20;
	unsigned int number;
	cin >> number;
	unsigned int i = 0;
	bool flag = true;
	unsigned int array[MAX_SIZE];
	while (number)
	{
		array[i] = number % 10;
		number /= 10;
		i++;
	}
	int temp = i / 2;
	for (int j = 0; j < temp; j++)
	{
		if (array[j] != array[i - j - 1])
		{
			flag = false;
		}
	}
	cout << ((flag) ? "Palindrom" : "Not palindrom") << endl;
	*/
	
	/*
	const int COLS = 16;
	const int ROWS = 16;
	int matrix[ROWS][COLS];
	unsigned int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	*/
	
	/*
	const int COLS = 16;
	const int ROWS = 16;
	int matrix[ROWS][COLS];
	unsigned int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << matrix[j][i] << ' ';
		}
		cout << endl;
	}
	*/
	
	
	
	
	
	


	return 0;
}