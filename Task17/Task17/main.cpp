#include <iostream>
#include <cmath>
using namespace std;



int main()
{

	int years;
	cout << "Enter your years: ";
	cin >> years;
	unsigned long long int days = ((years / 4) * 366) + ((years - (years / 4)) * 365);
	cout << "Days: " << days << endl;
	unsigned long long int hours = days * 24;
	cout << "Hours: " << hours << endl;
	unsigned long long int seconds = hours * 3600;
	cout << "Second: " << seconds << endl;
	return 0;
}