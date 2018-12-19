#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

//2.
int positionLetter(const char *str, char letter, size_t n, size_t start = 0)
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
	return positionLetter(str, letter, n, start);
}

//1.

size_t m_strlen(const char *str)
{
	unsigned int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

bool isPalindrom(const char *str)
{
	if (str == nullptr)
	{
		return false;
	}
	unsigned int len = m_strlen(str);
	unsigned int temp = len / 2;
	for (int i = 0; i < temp; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

char mostCommonLetter(const char *str)
{
	unsigned int count = 0;
	unsigned int big_count = 0;
	char letter;
	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = i; str[j] != '\0'; j++)
		{
			if (str[i] == str[j])
			{
				count++;
			}
		}
		if (count > big_count)
		{
			big_count = count;
			letter = str[i];
		}
		else if (count == big_count)
		{
			if (str[i] < letter)
			{
				letter = str[i];
			}
		}
		count = 0;
	}
	return letter;
}

void bigFunction(char str[][MAX_SIZE], size_t n, char(*f)(const char* str), bool(*f2)(const char *str), size_t(*f3)(const char *str))
{
	for (int i = 0; i < n; i++)
	{
		if (f2(str[i]) && (f3(str[i]) % 2 == 0))
		{
			cout << f(str[i]) << ' ';
		}
	}
}

int main()
{
	//2.
	/*char str[MAX_SIZE];
	char letter;
	unsigned int n;
	cin >> str;
	cin >> letter;
	do
	{
		cin >> n;
	} while (n < 1 || n > 100);
	cout << positionLetter(str, letter, n);*/

	//1.
	char str[MAX_SIZE][MAX_SIZE];
	unsigned int n;
	do
	{
		cin >> n;
	} while (n < 1 || n > 100);
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	bigFunction(str, n, mostCommonLetter, isPalindrom, m_strlen);

	return 0;
}