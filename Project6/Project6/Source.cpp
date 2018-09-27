#include <iostream>
 
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	int d = (b*b) - (4 * a*c);
	if (d >= 0)
	{
        int x = (-b + (d*d)) / 2 * a;
		int y = (-b - (d*d)) / 2 * a;
		cout << x << y;
	}
	else
	{
		cout << "error";
	}


	return 0;
}