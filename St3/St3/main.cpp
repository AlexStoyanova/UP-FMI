#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	//1.
	/*bool x, y;
	cin >> x >> y;
	cout << "x&&y" << x&&y;
	cout << "!x" << !x << endl;
	cout << "!y" << !y << endl;
	cout << "x||y" << x || y;*/
	//2.a
	/*int a;
	int h;
	cin >> a >> h;
	cout << (a*h) / 2;*/
	//2.b
	/*double a, b, c;
	cin >> a >> b >> c;
	double p = ((a + b + c) / 2);
	cout << sqrt(p*(p - a)*(p - b)*(p - c));*/
	//3.
	/*int a, b;
	cin >> a >> b;
	int c = a;
	a = b;
	b = c;
	cout << a << " " << b;*/
	//4.
	//int p, q;
	//cin >> p >> q;
	//cout << p / q << " " << p%q;
	//5.
	/*int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << distance;*/
	//6.
	int a, b, c;
	cin >> a >> b >> c;
	int discr = (b*b) + (4 * a*c);
	if (discr < 0)
	{
		cout << "no real shit";
	}
	else if (discr = 0)
	{
		cout << "x1,2: " << -b / (2 * a);
	}
	else
	{
		cout << "x1: " <<(-b + sqrt(discr)) / (2 * a) << ", x2: " << (-b - sqrt(discr)) / (2 * a);
	}





	return 0;
}