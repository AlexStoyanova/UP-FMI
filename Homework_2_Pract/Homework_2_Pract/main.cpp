#include <iostream>
using namespace std;

const int SIZE = 100;
int counter = 0;

bool isValid(int X, int Y, size_t n)
{
	if (X < 0 || Y < 0 || X > (n - 1) || Y > (n - 1))
	{
		return false;
	}
	return true;
}

void waterInSquare(int matrix[][SIZE], size_t n, size_t X, size_t Y)
{
	if ((X != 0 && Y != 0 && X != (n-1) && Y != (n - 1)) && 
		((matrix[X - 1][Y] == 0) && (matrix[X + 1][Y] == 0) && (matrix[X][Y - 1] == 0) && (matrix[X][Y + 1] == 0)))
	{
		counter++;
		return;
	}
	else if (X == 0 && Y == 0 && (matrix[X + 1][Y] == 0 && matrix[X][Y + 1] == 0))
	{
		counter++;
		return;
	}
	else if (X == 0 && Y == (n - 1) && (matrix[X][Y - 1] == 0 && matrix[X + 1][Y] == 0))
	{
		counter++;
		return;
	}
	else if (X == (n - 1) && Y == (n - 1) && (matrix[X - 1][Y] == 0 && matrix[X][Y - 1] == 0))
	{
		counter++;
		return;
	}
	else if (X == (n - 1) && Y == 0 && (matrix[X - 1][Y] == 0 && matrix[X][Y + 1] == 0))
	{
		counter++;
		return;
	}
	else if (Y == 0 && matrix[X - 1][Y] == 0 && matrix[X][Y + 1] == 0 && matrix[X + 1][Y] == 0)
	{
		counter++;
		return;
	}
	else if (X == (n - 1) && matrix[X][Y - 1] == 0 && matrix[X - 1][Y] == 0 && matrix[X][Y + 1] == 0)
	{
		counter++;
		return;
	}
	else if (Y == (n - 1) && matrix[X - 1][Y] == 0 && matrix[X + 1][Y] == 0 && matrix[X][Y - 1] == 0)
	{
		counter++;
		return;
	}
	else if (X == 0 && matrix[X][Y - 1] == 0 && matrix[X + 1][Y] == 0 && matrix[X][Y + 1] == 0)
	{
		counter++;
		return;
	}
	//matrix[X][Y] == 0;
	if (isValid(X + 1, Y, n) && matrix[X + 1][Y] == 1)
	{
		matrix[X + 1][Y] = 0;
		waterInSquare(matrix, n, X + 1, Y);
	}
	if (isValid(X, Y - 1, n) && matrix[X][Y - 1] == 1)
	{
		matrix[X][Y - 1] = 0;
		waterInSquare(matrix, n, X , Y - 1);
	}
	if (isValid(X, Y + 1, n) && matrix[X][Y + 1] == 1)
	{
		matrix[X][Y + 1] = 0;
		waterInSquare(matrix, n, X, Y + 1);
	}
	if (isValid(X - 1, Y, n) && matrix[X - 1][Y] == 1)
	{
		matrix[X - 1][Y] = 0;
		waterInSquare(matrix, n, X - 1, Y);
	}
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

	waterInSquare(matrix, n, X, Y);
	cout << counter << endl;

	return 0;
}