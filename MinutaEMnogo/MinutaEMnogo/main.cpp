#include <iostream>
using namespace std;

size_t m_strlen(const char *str) 
{
	size_t len = 0;
	for (; str[len] != '\0'; len++);
	return len;
}


int m_strcmp(const char *str1, const char *str2)
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
	const int SIZE = 50;
	char name[SIZE];
	char *str[] = { "Petar Beron","Vasil Levski","Ivan Vazov","Zahari Stoyanov","Petko Slaveikov" };
	cout << "Enter name: " << endl;
	cin.getline(name, SIZE);
	bool isName = false;
	for (int i = 0; i < 5; i++)
	{
		if (m_strcmp(str[i], name) == 0)
		{
			isName = true;
			break;
		}
	}
	if (isName)
	{
		cout << "This is a correct name!" << endl;
	}
	else
	{
		cout << "This is NOT a correct name!" << endl;
	}


	return 0;
}