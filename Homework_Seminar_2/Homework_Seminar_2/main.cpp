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
	return positionLetter(str, letter, n, start + 1);
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

bool isPalindrom(const char *str, size_t size)
{
	if (str == nullptr)
	{
		return false;
	}
	unsigned int temp = size / 2;
	for (int i = 0; i < temp; i++)
	{
		if (str[i] != str[size - i - 1])
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

typedef char(*mostComLetter)(const char *str);
typedef bool(*isPalind)(const char *str, size_t size);
typedef size_t(*myStrlen)(const char *str);

void mostCommonLetterInEvenPalindrom(char str[][MAX_SIZE], size_t n, mostComLetter mstCmL, isPalind palindrom, myStrlen len)
{
	size_t size;
	for (int i = 0; i < n; i++)
	{
		size = len(str[i]);
		if ((size % 2 == 0) && palindrom(str[i], size))
		{
			cout << mstCmL(str[i]) << ' ';
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
	mostCommonLetterInEvenPalindrom(str, n, mostCommonLetter, isPalindrom, m_strlen);

	return 0;
}