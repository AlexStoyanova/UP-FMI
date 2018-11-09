#include <iostream>
using namespace std;

int m_strcmp(const char *str1, const char *str2)
{
	unsigned int i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	return (int)(str1[i] - str2[i]);
}

int main()
{
	const int SIZE = 50;
	char name[SIZE];
	const char *str[] = { "Petar Beron","Vasil Levski","Ivan Vazov","Zahari Stoyanov","Petko Slaveikov" };
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