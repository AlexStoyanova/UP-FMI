#include <iostream>
using namespace std;

void m_strcpy(char *destination, const char *source)
{
	unsigned int i = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
}

void changeLetter(char *&str, char a1, char a2)
{
	if (str == nullptr)
	{
		return;
	}
	unsigned int len = strlen(str);
	char* buff = new(nothrow)char[len + 1];
	if(buff != nullptr)
	{
		for (int i = 0; i < len; i++)
		{
			if (str[i] == a1)
			{
				buff[i] = a2;
			}
			else
			{
				buff[i] = str[i];
			}
		}
		buff[len] = '\0';
		delete[] str;
		str = buff;
		buff = nullptr;
	}
}

void deleteLetter(char *&str, char a1)
{
	if (str == nullptr)
	{
		return;
	}
	unsigned int len = strlen(str);
	unsigned int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == a1)
		{
			count++;
		}
	}
	char *buff = new(nothrow) char[len - count + 1];
	if (buff != nullptr)
	{
		int i = 0;
		int j = 0;
		while (str[i] != '\0')
		{
			if (str[i] != a1)
			{
				buff[j++] = str[i];
			}
			i++;
		}
		buff[len - count] = '\0';
		delete[] str;
		str = buff;
		buff = nullptr;
	}
}

void changeLetterWithString(char *&str, char a1, const char *removeStr)
{
	if (str == nullptr)
	{
		return;
	}
	unsigned int lenStr = strlen(str);
	unsigned int lenRemover = strlen(removeStr);
	if (lenRemover == 0)
	{
		deleteLetter(str, a1);
	}
	else if (lenRemover == 1)
	{
		changeLetter(str, a1, removeStr[0]);
	}
	unsigned int count = 0;
	for (int i = 0; i < lenStr; i++)
	{
		if (str[i] == a1)
		{
			count++;
		}
	}
	char *buff = new(nothrow) char[lenStr - count + count*lenRemover + 1];
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a1)
		{
			while (k < lenRemover)
			{
				buff[j++] = removeStr[k++];
			}
			k = 0;
		}
		else
		{
			buff[j++] = str[i];
		}
		i++;
	}
	buff[lenStr - count + count*lenRemover] = '\0';
	delete[] str;
	str = buff;
	buff = nullptr;
}

void changeStringWithString(char *&str, char letter)
{
	if (str == nullptr)
	{
		return;
	}
	unsigned int len = strlen(str);
	char *buff = new(nothrow) char[len];
	if (len == 1)
	{
		return;
	}
	if (buff != nullptr)
	{
		if (len == 2)
		{
			buff[0] = letter;
			buff[1] = '\0';
		}
		else
		{
			unsigned int pos = len / 2;
			unsigned int j = 0;
			for (int i = 0; i < len; i++)
			{
				if (i == (pos - 1))
				{
					buff[j++] = letter;
					i++;
				}
				else
				{
					buff[j++] = str[i];
				}
			}
			buff[j] = '\0';
		}
		delete[] str;
		str = buff;
		buff = nullptr;
	}
}

void changeStringWithSmallString(char *&str, char letter)
{
	if (str == nullptr)
	{
		return;
	}
	unsigned int len = strlen(str);
	char *buff = new(nothrow) char[len - 1];
	if (len == 1)
	{
		return;
	}
	if (buff != nullptr)
	{
		if (len == 3)
		{
			buff[0] = letter;
			buff[1] = '\0';
		}
		else
		{
			unsigned int pos = len / 2;
			unsigned int j = 0;
			for (int i = 0; i < len; i++)
			{
				if (i == (pos - 1))
				{
					buff[j++] = letter;
					i+=2;
				}
				else
				{
					buff[j++] = str[i];
				}
			}
			buff[j] = '\0';
		}
		delete[] str;
		str = buff;
		buff = nullptr;
	}
}

void printArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << ' ';
}

void passwordSmart(int *const &arr, int pos = 4)
{
	if (pos < 0)
	{
		printArray(arr, 5);
		return;
	}
	for (int i = 0; i <= 9; i++)
	{
		arr[pos] = i;
		passwordSmart(arr, pos - 1);
	}
	
}

const char* grammar[] = { "aSa", "aSb", "bSa", "bSb", "" };
const char letter = 'S';

void generateStrings(char *&str, size_t k) 
{
	if (k == 0)
	{
		deleteLetter(str, letter);
		cout << str << endl;
		changeStringWithString(str, letter);
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		changeLetterWithString(str, letter, grammar[i]);
		generateStrings(str, k - 2);
	}
	changeStringWithSmallString(str, letter);
}

int main()
{
	size_t k = 10;
	char *startString = new char[2];
	startString[0] = 'S';
	startString[1] = '\0';

	generateStrings(startString, k);
	delete[] startString;

	/*const unsigned int MAX_SIZE = 100;
	char a1 = 'A';
	char temp[MAX_SIZE];
	cin.getline(temp, MAX_SIZE);
	unsigned int lenght = strlen(temp);
	char *str = new(nothrow) char[lenght + 1];
	m_strcpy(str, temp);
	char remover[MAX_SIZE];
	cin.get(remover, MAX_SIZE);
	if (str != nullptr)
	{
		changeLetterWithString(str, a1, remover);
		cout << str;
	}
	delete[] str;
	str = nullptr;*/
	//int array[5] = { 0, 0, 0, 0, 0 };
	//passwordSmart(array);


	return 0;
}