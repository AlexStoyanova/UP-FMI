#include <iostream>
using namespace std;


bool isAlpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return true;
	}
	return false;
}


void replace(char *str, char *word, char *replWord)
{
	unsigned int temp = 0;
	bool isNotThisWord = false;
	unsigned int lenWord = strlen(word);
	unsigned int lenReplWord = strlen(replWord);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isAlpha(str[i]))
		{
			for (int j = i; isAlpha(str[j]); j++, temp++)
			{
				if (str[j] != word[temp])
				{
					isNotThisWord = true;
					break;
				}
			}
			if (temp == lenWord)
			{
				unsigned int lenTemp = lenReplWord;
				if (lenWord == lenReplWord)
				{
					while (temp)
					{
						str[i + temp - 1] = replWord[temp - 1];
						temp--;
					}
				}
				else if (lenWord > lenReplWord)
				{
					int j;
					for (j = i + lenWord; str[j] != '\0'; j++)
					{
						str[j - (lenWord - lenReplWord)] = str[j];
					}
					str[j - (lenWord - lenReplWord)] = '\0';
					while (lenTemp)
					{
						str[i + lenTemp - 1] = replWord[lenTemp - 1];
						lenTemp--;
					}
					temp = 0;
				}
				else
				{
					for (int j = strlen(str); j > i + lenWord - 1; j--)
					{
						str[j + lenTemp - lenWord] = str[j];
					}
					while (lenTemp)
					{
						str[i + lenTemp - 1] = replWord[lenTemp - 1];
						lenTemp--;
					}
					temp = 0;
				}
				i += lenReplWord;
			}
			if (isNotThisWord)
			{
				for (; isAlpha(str[i]); i++);
				isNotThisWord = false;
			}
		}
	}
}


int main()
{
	const int SIZE = 1024;
	char str[SIZE];
	cin.getline(str, SIZE);
	char word[SIZE];
	char replWord[SIZE];
	cin >> word >> replWord;
	replace(str, word, replWord);
	cout << str;

	return 0;
}