#include <iostream>
using namespace std;

const int maxcol = 30;
const int maxrow = 30;

void InsurtMatrix(int matrix[][maxcol], size_t h, size_t w)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> matrix[h][w];
		}
	}
}

void printMatrix(int matrix[][maxcol], size_t h, size_t w)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << matrix[h][w] << ' ';
		}
		cout << '\n';
	}
}

int minElemMat(int mat[][maxcol], size_t h, size_t w)
{
	int minElem = mat[0][0]; 
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (minElem > mat[i][j])
			{
				minElem = mat[i][j];
			}
		}
	}
	return minElem;
}

int main()
{
	unsigned int h, w;
	cout << "enter number of cols" << '\n';
	cin >> h;
	cout << "enter number of rows" << '\n';
	cin >> w;
	int matrix[maxrow][maxcol];
	InsurtMatrix (matrix, h, w);
	cout << "------------\n";
    //printMatrix(matrix, h, w);
	//cout << "------------\n";
	cout << "Minimal matrix element :" << minElemMat(matrix, h, w);
	cout << endl;
	cout << "bye";

	return 0;
}