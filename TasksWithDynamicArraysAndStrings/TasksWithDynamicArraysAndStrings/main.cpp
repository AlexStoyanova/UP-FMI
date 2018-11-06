#include <iostream>

bool isAlpha(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		return true;
	}
	return false;
}

bool isDig(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return true;
	}
	return false;
}


int main()
{
	/*
	char ch;
	std::cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
	{
		std::cout << char(ch + 32);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		std::cout << char(ch - 32);
	}
	else
	{
		std::cout << "Not a letter!" << std::endl;
	}
	*/
	
	/*
	char ch;
	std::cin >> ch;
	if (ch >= '0' && ch <= '9')
	{
		std::cout << (int)ch << std::endl;
	}
	*/




	return 0;
}