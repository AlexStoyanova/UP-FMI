#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	double big_distance = sqrt(x*x + y*y);
	double small_distance = sqrt((x - 2)*(x - 2) + y*y);
	double smallest_distance = sqrt((x + 2)*(x + 2) + y*y);
	if (big_distance <= 4.0)
	{
		if (x >= 0 && y >= 0)
		{
			if (small_distance < 2.0 && small_distance > 0.0)
			{
				cout << "Point is outside!" << endl;
			}
			else
			{
				cout << "Point is inside!" << endl;
			}
		}
		else if (x < 0 && y >= 0)
		{
			if (smallest_distance < 1.0 && smallest_distance >= 0.0)
			{
				cout << "Point is outside!" << endl;
			}
			else
			{
				cout << "Point is inside!" << endl;
			}
		}
		else if (x < 0 && y < 0)
		{
			if (smallest_distance >= 1.0 && smallest_distance <= 2.0)
			{
				cout << "Point is inside!" << endl;
			}
			else
			{
				cout << "Point is outside!" << endl;
			}
		}
		else
		{
			cout << "Point is outside!" << endl;
		}
	}
	else
	{
		cout << "Point is outside!" << endl;
	}

	return 0;
}