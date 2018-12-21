#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int positionLetter(const char *str, const char letter, size_t n, size_t start = 0)
{
	if ((str == nullptr) || (str[start] == '\0'))
	{
		cout << "String is empty or position of this letter do not exist!" << endl;
		return -1;
	}
	if (str[start] == letter)
	{
		n--;
	}
	if (n == 0)
	{
		cout << "Position is: ";
		return start;
	}
	return positionLetter(str, letter, n, start + 1);
}

int main()
{
	char str[MAX_SIZE];
	char letter;
	unsigned int n;
	cout << "Enter string: ";
	cin.getline(str, MAX_SIZE);
	cout << "Enter letter: ";
	cin >> letter;
	do
	{
		cout << "Enter number: ";
		cin >> n;
	} while (n < 1 || n > 100);
	cout << positionLetter(str, letter, n) << endl;

	return 0;
}