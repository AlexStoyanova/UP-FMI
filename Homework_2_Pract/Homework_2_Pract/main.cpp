#include <iostream>
using namespace std;

const int SIZE = 100;

int m_max(int a, int b)
{
	return (a > b) ? a : b;
}

bool isValid(int X, int Y, size_t n)
{
	if (X < 0 || Y < 0 || X > (n - 1) || Y > (n - 1))
	{
		return false;
	}
	return true;
}

int waterInSquare(int matrix[][SIZE], size_t n, size_t X, size_t Y, int counter = 0)
{
	if ((!isValid(X, Y, n)) || matrix[X][Y] == 0)
	{
		return counter - 1;
	}
	matrix[X][Y] = 0;
	return m_max(m_max(waterInSquare(matrix, n, X + 1, Y, counter + 1), waterInSquare(matrix, n, X, Y - 1, counter + 1)),
		m_max(waterInSquare(matrix, n, X, Y + 1, counter + 1), waterInSquare(matrix, n, X - 1, Y, counter + 1)));
}

int main()
{
	int matrix[SIZE][SIZE];
	unsigned int n;
	unsigned int X, Y;
	cin >> n >> X >> Y;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int time = waterInSquare(matrix, n, X, Y);
	bool isFine = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] != 0)
			{
				isFine = false;
			}
		}
	}
	if (isFine)
	{
		cout << time << endl;
	}
	else
	{
		cout << "-1" << endl;
	}

	return 0;
}