#include <iostream>
using namespace std;

double distanceBetweenPoints(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main()
{
	//1.
	/*
	const double EPS = 0.00001;
	double x, y;
	cout << "Enter coordinates of the point: " << endl;
	cin >> x >> y;
	double distance = sqrt((x - 4)*(x - 4) + (y - 2)*(y - 2));
	double sideJ = sqrt(13);
	double sideL = sqrt(37);
	double sideK = sqrt(68);
	double p = (sideJ + sideK + sideL) / 2;
	double bigS = sqrt(p*(p - sideJ)*(p - sideK)*(p - sideL));
	double smallSideA = sqrt((x + 2)*(x + 2) + (y + 4)*(y + 4));
	double smallSideB = sqrt(x*x + (y + 1)*(y + 1));
	double smallSideC = sqrt((x - 6)*(x - 6) + (y + 2)*(y + 2));
	double p1 = (sideJ + smallSideA + smallSideB) / 2;
	double p2 = (sideL + smallSideB + smallSideC) / 2;
	double p3 = (sideK + smallSideA + smallSideC) / 2;
	double smallS1 = sqrt(p1*(p1 - sideJ)*(p1 - smallSideA)*(p1 - smallSideB));
	double smallS2 = sqrt(p2*(p2 - sideL)*(p2 - smallSideB)*(p2 - smallSideC));
	double smallS3 = sqrt(p3*(p3 - sideK)*(p3 - smallSideA)*(p3 - smallSideC));
	double sum = smallS1 + smallS2 + smallS3;
	if (x <= -2.0 && x >= -6.0 && y <= 5.0 && y >= 2.0)
	{
		cout << "Point is inside rectangle!" << endl;
	}
	else if (x > 0 && y > 0 && distance <= 1.0)
	{
		cout << "Point is inside circle!" << endl;
	}
	else if ((bigS - sum) <= EPS)
	{
		cout << "Point is inside triangle!" << endl;
	}
	else
	{
		cout << "Point is outside of everything!" << endl;
	}
	*/

	//2.
	/*
	const int SIZE = 100;
	unsigned int n, m;
	int array[SIZE];
	do 
	{
		cout << "Enter number of numbers:" << ' ';
		cin >> n;
	} while (n < 1 || n > 100);
	do
	{
		cout << "Enter number of rotations:" << ' ';
		cin >> m;
	} while (m < 1 || m > 1000000);
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	int lastElement;
	m %= n;
	while (m)
	{
		lastElement = array[n - 1];
		for (int i = n - 1; i > 0 ; i--)
		{
			array[i] = array[i - 1];
		}
		array[0] = lastElement;
		m--;
	}
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << ' ';
	}
	*/

	//3.
	/*const int SIZE = 10;
	unsigned int n;
	int matrix[SIZE][SIZE];
	int buff[SIZE][SIZE];
	do
	{
		cin >> n;
	} while (n < 2 || n > 10);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buff[i][j] = matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i % 2 ) == 0)
			{
				swap(buff[j][i], matrix[i][j]);
				swap(buff[i][j], matrix[j][i]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << buff[i][j] << ' ';
		}
		cout << endl;
	}
	*/

	//4.
	/*const int SIZE = 50;
	unsigned int n, k;
	cin >> n >> k;
	int array[SIZE];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	unsigned int sum = 0;
	unsigned int start = 1;
	bool hasSum = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			sum += array[j];
			if (sum == k)
			{
				cout << start << ' ' << (j + 1) << ' ';
				hasSum = true;
			}
			else if (sum > k)
			{
				sum = 0;
				start = i + 2;
				break;
			}
		}
	
	}
	if (!(hasSum))
	{
		cout << "No such subsequences!" << endl;
	}
	*/

	//5.
	/*int x1, y1, x2, y2, x3, y3;
	cout << "Enter coordinates of points of a triangle: " << ' ';
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double sideA = distanceBetweenPoints(x1, y1, x2, y2);
	double sideB = distanceBetweenPoints(x2, y2, x3, y3);
	double sideC = distanceBetweenPoints(x1, y1, x3, y3);
	if (sideA < (sideB + sideC) && sideB < (sideA + sideC) && sideC < (sideA + sideB))
	{
		if (sideA == sideB || sideB == sideC || sideA == sideC)
		{
			cout << "Ravnobedren triugulnik!" << endl;
		}
		else
		{
			cout << "Triugulnik" << endl;
		}
	}
	else
	{
		cout << "Ne e triugulnik" << endl;
	}
	*/
	
	//6.
		






	return 0;
}