#include <iostream>
#include <random>
#include<iomanip>
#include<time.h>

using namespace std;

const int MAXSIZE = 1024;
const int MAXNUMBER = 200;
const int NCELLS = 3;
void clean(int**&, size_t);


bool fillmatrix(int**& matrix, size_t n, size_t m)
{
	matrix = new (nothrow) int*[n];
	if (!matrix)
		return false;
	for (size_t i = 0; i < n; i++)
	{
		matrix[i] = new (nothrow) int[m];
		if (!matrix[i])
		{
			clean(matrix, i - 1);
			return false;
		}
	}
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < m; j++)
			matrix[i][j] = rand() % MAXNUMBER;
}

void print(int** matrix, size_t n, size_t m)
{

	for (size_t i = 0; i < n; i++) {

		for (size_t j = 0; j < m; j++)
			cout << setw(NCELLS) << matrix[i][j];

		cout << endl;
	}
}
void clean(int**& matrix, size_t n) {

	for (size_t i = 0; i < n; i++)
		delete[] matrix[i];

	delete[] matrix;
	matrix = nullptr;

}


int main()
{
	unsigned int N, M;
	int** matrix = nullptr;
	cin >> N >> M;
	

	srand(time(NULL));

	fillmatrix(matrix, N, M);

	print(matrix, N, M);

	clean(matrix,N);






	return 0;
}