#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
unsigned int start = 0;

int positionLetter(char *str, char letter, size_t n)
{
	if (start == (strlen(str) + 1))
	{
		return -1;
	}
	if (str[start] == letter)
	{
		n--;
	}
	if (n == 0)
	{
		return start;
	}
	start++;
	return positionLetter(str, letter, n);
}

int main()
{
	char str[MAX_SIZE];
	char letter;
	unsigned int n;
	cin >> str;
	cin >> letter;
	do
	{
		cin >> n;
	} while (n < 1 || n > 100);
	cout << positionLetter(str, letter, n);



	return 0;
}