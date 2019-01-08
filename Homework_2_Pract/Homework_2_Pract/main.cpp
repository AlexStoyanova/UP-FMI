#include <iostream>
#include <algorithm>
using namespace std;

const int SIZE = 100;

bool isValid(int X, int Y, size_t n)
{
	if (X < 0 || Y < 0 || X >(n - 1) || Y >(n - 1))
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
	return max(max(waterInSquare(matrix, n, X + 1, Y, counter + 1), waterInSquare(matrix, n, X, Y - 1, counter + 1)),
		max(waterInSquare(matrix, n, X, Y + 1, counter + 1), waterInSquare(matrix, n, X - 1, Y, counter + 1)));
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
	unsigned int time = waterInSquare(matrix, n, X, Y);
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