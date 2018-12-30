#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	const int SIZE = 10;
	char str[SIZE][SIZE] = { "FACI", "OBQP", "ANOB", "MASS" };
	char word[SIZE];
	cin.getline(word, SIZE);
	bool isWord = false;
	for (int i = 0; i < 4; i++)
	{
		if (strcmp(word, str[i]) == 0)
		{
			isWord = true;
		}
	}
	char *ptr = *str + 4;
	for (int j = 0; j < 4; j++)
	{
		if (strcmp(word, ptr) == 0)
		{
			isWord = true;
		}	
	}
	if (isWord)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}


	return 0;
}
