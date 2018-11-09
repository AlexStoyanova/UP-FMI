#include <iostream>

using namespace std;

size_t m_strlen(const char* str) {
	size_t len = 0;
	for (; str[len] != '\0'; len++);
	return len;
}


char* m_strcat(char *destination, char* source)
{
	char *temp = new char[m_strlen(destination) + m_strlen(source) + 1];
	unsigned int i = 0;
	unsigned int j = 0;
	while (destination[i] != '\0')
	{
		temp[i] = destination[i];
		i++;
	}
	while (source[j] != '\0')
	{
		temp[i++] = source[j++];
	}
	temp[i] = '\0';
	delete[] destination;
	destination = temp;
	return destination;
}


char *m_strcpy(char* destination, const char* source)
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

int m_strcmp(const char* str1, const char* str2)
{
	unsigned int len1 = m_strlen(str1);
	unsigned int len2 = m_strlen(str2);
	if (len1 > len2)
	{
		return (int)(str1[len2] - str2[len2]);
	}
	if (len1 < len2) {
		return (int)(str1[len1] - str2[len1]);
	}
	unsigned int i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (int)(str1[i] - str2[i]);
		}
		i++;
	}
	return 0;
}


int main()
{
	const size_t SIZE = 50;
	char buff1[SIZE];
	char buff2[SIZE];
	cin >> buff1 >> buff2;
	char* str1 = new char[m_strlen(buff1) + 1];
	char* str2 = new char[m_strlen(buff2) + 1];
	m_strcpy(str1, buff1);
	m_strcpy(str2, buff2);
	cout << "Before concatenation" << endl;
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << m_strcmp(str1, str2) << endl;
	str1 = m_strcat(str1, str2);
	cout << "After concatenation" << endl;
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	
	return 0;
}