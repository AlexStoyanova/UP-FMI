#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

void fillMatrix(int matrix[][MAX_SIZE], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][MAX_SIZE], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

unsigned int inRange()
{
	unsigned int number;
	do 
	{
		cin >> number;

	} while (number >= 10 || number < 0);
	return number;
}

bool sumRows(int matrix[][MAX_SIZE], size_t n, int &final_sum_in_row)
{
	int prev_sum = 0;
	for (size_t j = 0; j < n; j++)
	{
		prev_sum += matrix[0][j];
	}
	int sum;
	for (size_t i = 1; i < n; i++)
	{
		sum = 0;
		for (size_t j = 0; j < n; j++)
		{
			sum += matrix[i][j];
		}
		if (prev_sum != sum)
		{
			return false;
		}
		prev_sum = sum;
	}
	final_sum_in_row = prev_sum;
	return true;
}

bool sumCols(int matrix[][MAX_SIZE], size_t n, int &final_sum_in_col)
{
	int prev_sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		prev_sum += matrix[i][0];
	}
	int sum;
	for (size_t j = 1; j < n; j++)
	{
		sum = 0;
		for (size_t i = 0; i < n; i++)
		{
			sum += matrix[i][j];
		}
		if (prev_sum != sum)
		{
			return false;
		}
		prev_sum = sum;
	}
	final_sum_in_col = prev_sum;
	return true;
}

bool sumDiags(int matrix[][MAX_SIZE], size_t n, int &final_sum_in_diags)
{
	int sum1 = 0;
	int sum2 = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
			{
				sum1 += matrix[i][j];
			}
			if (i + j == n - 1)
			{
				sum2 += matrix[i][j];
			}
		}
	}
	if (sum1 != sum2)
	{
		return false;
	}
	final_sum_in_diags = sum1;
	return true;
}

int main()
{
	int final_sum_in_rows = 0;
	int final_sum_in_cols = 0;
	int final_sum_in_diags = 0;

	unsigned int number = inRange();
	int matrix[MAX_SIZE][MAX_SIZE];
	fillMatrix(matrix, number);
	if (sumRows(matrix, number, final_sum_in_rows) && sumCols(matrix, number, final_sum_in_cols) && sumDiags(matrix, number, final_sum_in_diags))
	{
		if (final_sum_in_rows == final_sum_in_cols && final_sum_in_cols == final_sum_in_diags)
		{
			cout << "True!!!" << endl;
		}
		else
		{
			cout << "False!!!" << endl;
		}
	}
	else
	{
		cout << "False!!!" << endl;
	}

	return 0;
}