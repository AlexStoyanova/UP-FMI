#include <iostream>
#include <cmath>
using namespace std;

const int MAX_ROWS = 20;
const int MAX_COLS = 20;

void fillMatrix(int matrix[][MAX_COLS], size_t n, size_t m)
{
	for (size_t rows = 0; rows < n; rows++)
	{
		for (size_t cols = 0; cols < m; cols++)
		{
			cin >> matrix[rows][cols];
		}
	}
}

void printMatrix(int matrix[][MAX_COLS], size_t n, size_t m)
{
	for (size_t rows = 0; rows < n; rows++)
	{
		for (size_t cols = 0; cols < m; cols++)
		{
			cout << matrix[rows][cols] << " ";
		}
		cout << endl;
	}
}

void diagMatrix(int matrix[][MAX_COLS], size_t n)
{
	for (size_t rows = 0; rows < n; rows++)
	{
		for (size_t cols = 0; cols < n; cols++)
		{
			if (rows == cols || (rows + cols) == n - 1)
			{
				cout << matrix[rows][cols] << " ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void compactNewMatrix(int matrix[][MAX_COLS], size_t n, size_t m)
{
	for (size_t row = 0; row < n; row++)
	{
		for (size_t col = 0; col < m; col++)
		{
			if ((row == 0 || row == n - 1) || (col == 0 || col == m - 1))
			{
				cout << matrix[row][col] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int sumOverDiagonal(int matrix[][MAX_COLS], size_t n, size_t m)
{
	int sum = 0;
	for (size_t rows = 0; rows < n; rows++)
	{
		for (size_t cols = 0; cols < m; cols++)
		{
			if (cols > rows)
			{
				sum += matrix[rows][cols];
			}
		}
	}
	return sum;
}

bool isPrime(unsigned int number)
{
	if (number < 2)
	{
		return false;
	}
	unsigned int sqrtN = sqrt(number);
	for (size_t i = 2; i <= sqrtN; i++)
	{
		if (number%i == 0)
		{
			return false;
		}
	}
	return true;
}

unsigned int countPrimesNumbers(int matrix[][MAX_COLS], size_t n, size_t m)
{
	unsigned int count = 0;
	for (size_t rows = 0; rows < n; rows++)
	{
		for (size_t cols = 0; cols < m; cols++)
		{
			if ((cols < rows) && isPrime(matrix[rows][cols]))
			{
				count++;
			}
		}
	}
	return count;
}

void belowAndAboveTheDiagonal(int matrix[][MAX_COLS], size_t n, size_t m)
{
	cout << sumOverDiagonal(matrix, n, m)*countPrimesNumbers(matrix, n, m) << endl;
}

void saddlePoint(int matrix[][MAX_COLS], size_t n, size_t m)
{
	unsigned int indexMax;
	bool isFoundSaddlePointInTheMatrix = false;
	for (size_t rows = 0; rows < n; rows++)
	{
		indexMax = 0;
		for (size_t i = 1; i < m; i++)
		{
			if (matrix[rows][i] > matrix[rows][indexMax])
			{
				indexMax = i;
			}
		}
		bool isFoundSaddlePointOnTheRow = true;
		for (size_t j = 0; j < n; j++)
		{
			if (matrix[j][indexMax] < matrix[rows][indexMax])
			{
				isFoundSaddlePointOnTheRow = false;
				break;
			}
		}
		if (isFoundSaddlePointOnTheRow)
		{
			cout << '(' << rows << ", " << indexMax << ')';
			isFoundSaddlePointInTheMatrix = true;
		}
	}
	if (!isFoundSaddlePointInTheMatrix)
	{
		cout << "Not saddle point in the matrix!" << endl;
	}
}

int main()
{
	int matrix[MAX_ROWS][MAX_COLS];
	unsigned int n, m;
	cout << "Enter number of rows: " << " ";
	cin >> n;
	cout << "Enter number of cols: " << " ";
	cin >> m;
	if (n > MAX_ROWS || m > MAX_COLS)
	{
		cout << "Invalid size of rows and cols" << endl;
	}
	fillMatrix(matrix, n, m);
	//diagMatrix(matrix, n);
	//printOverDiagonal(matrix, n, m);
	saddlePoint(matrix, n, m);

	 





	return 0;
}