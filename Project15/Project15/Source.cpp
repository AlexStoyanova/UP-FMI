#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
bool isMagicRows = false;
bool isMagicCols = false;
void fillMatrix(int matrix[][MAX_SIZE], int size )
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int SumRows(int matrix[][MAX_SIZE], int size)
{
	int sumRows = 0;
	int nextRows = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sumRows += matrix[i][j];
			nextRows += matrix[i + 1][j];
		}
		if (sumRows == nextRows)
		{
			isMagicRows = true;
			nextRows = 0;
		}
		else
		{
			isMagicRows = false;
			break;
		}
	}
	return sumRows;
}

int SumCols(int matrix[][MAX_SIZE], int size)
{
	int sumCols = 0;
	int nextCols = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sumCols += matrix[j][i];
			nextCols += matrix[j + 1][i];
		}
		if (sumCols == nextCols)
		{
			isMagicCols = true;
			nextCols = 0;
		}
		else
		{
			isMagicRows = false;
			break;
		}
	}
	return sumCols;
}

int SumDiag(int matrix[][MAX_SIZE], int size)
{
	int sumDiag = 0;
	for (int i = 0; i < size; i++)
	{
		sumDiag += matrix[i][i];
	}
	return sumDiag;
}

int SumDiag2(int matrix[][MAX_SIZE], int size)
{
	int sumDiag2 = 0;
	for (int i = 0; i < size; i++)
	{
		sumDiag2 += matrix[i][size - i];
	}
	return sumDiag2;
}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	int size;
	cin >> size;
	fillMatrix(matrix, size);


	int sumRows = SumRows(matrix, size);
	int sumCols = SumCols(matrix, size);
	int sumDiag = SumDiag(matrix, size);
	int sumDiag2 = SumDiag2(matrix, size);
	cout << sumRows << " " << sumCols << " " << sumDiag << " " << sumDiag2 << endl;
	if ((sumRows == sumCols) && (sumCols == sumDiag) && (sumDiag == sumDiag2) && isMagicCols && isMagicRows)
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}

	return 0;
}