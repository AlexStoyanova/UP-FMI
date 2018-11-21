#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

char *m_strcpy(char *destination, const char *source)
{
	unsigned int i = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return destination;
}

bool m_strstr(const char *str1, const char *str2)
{
	unsigned int len1 = strlen(str1);
	unsigned int len2 = strlen(str2);
	const char *big_str = nullptr;
	const char *small_str = nullptr;
	if (len1 >= len2)
	{
		big_str = str1;
		small_str = str2;
	}
	else
	{
		big_str = str2;
		small_str = str1;
	}
	for (int i = 0; big_str[i] != '\0'; i++)
	{
		unsigned int j = 0;
		if (big_str[i] == small_str[j])
		{
			while ((small_str[j] != '\0') || (big_str[i] == small_str[j])) 
			{
				i++;
				j++;
			}
			if (j == strlen(small_str))
			{
				return true;
			}
			else
			{
				i -= j;
			}
		}
	}
	return false;
}

int m_strcmp(const char* str1, const char* str2)
{
	unsigned int i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	return (int)(str1[i] - str2[i]);
}

void mySort(char *str, size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (str[j] < str[j - 1])
			{
				swap(str[j], str[j - 1]);
			}
		}
	}
}

void numberInArray(unsigned long long int number, int array[])
{
	unsigned int i = 0;
	while (number)
	{
		array[i] = number % 10;
		number /= 10;
		i++;
	}
}


void printArrayReverse(int array[], size_t size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i];
	}
}

int main()
{
	/*const int SIZE = 32;
	char str1[SIZE];
	char str2[SIZE];
	cin >> str1;
	cin >> str2;
	cout << ((m_strstr(str1, str2)) ? "Yes" : "No");*/

	/*const int SIZE = 1024;
	char str[SIZE];
	cin.getline(str, SIZE);
	unsigned int len = strlen(str);
	for (int i = 1; i < len; i++)
	{
		if (str[i - 1] == ' ' && str[i] == ' ')
		{
			for (int j = i; j < len - 1; j++)
			{
				str[j] = str[j + 1];
			}
			str[len - 1] = str[len];
			len--;
			i--;
		}
	}
	cout << str;*/

	/*const int SIZE = 512;
	char str1[SIZE];
	char str2[SIZE]; 
	cin >> str1 >> str2;
	unsigned int len1 = strlen(str1);
	unsigned int len2 = strlen(str2);
	if (len1 != len2)
	{
		cout << "Incorrect!";
		return 0;
	}
	mySort(str1, len1);
	mySort(str2, len2);
	cout << (m_strcmp(str1, str2) ? "False" : "True");*/
	
	/*const int SIZE = 1024;
	char str[SIZE];
	unsigned int x;
	cin >> str;
	cin >> x;
	unsigned int len = strlen(str);
	x %= len;
	char temp;
	while (x)
	{
		temp = str[len - 1];
		for (int i = len - 1; i > 0; i--)
		{
			str[i] = str[i - 1];
		}
		str[0] = temp;
		x--;
	}
	cout << str;*/

	const int SIZE = 20;
	int num1[SIZE] = { 0, };
	int num2[SIZE] = { 0, };
	unsigned long long int number1, number2;
	cin >> number1 >> number2;
	numberInArray(number1, num1);
	numberInArray(number2, num2);
	int carry = 0;
	int temp = 0;
	for (int i = 0; i < SIZE; i++)
	{
		temp = num1[i] + num2[i] + carry;
		carry = 0;
		num1[i] = temp % 10;
		if (temp / 10)
		{
			carry = 1;
		}
	}
	printArrayReverse(num1,SIZE);


	return 0;
}
