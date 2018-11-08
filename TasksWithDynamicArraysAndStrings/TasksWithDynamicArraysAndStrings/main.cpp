#include <iostream>

bool isLittleAlpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return true;
	}
	return false;
}

bool isUpperAlpha(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
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
	
	char ch;
	std::cin >> ch;
	if (isUpperAlpha(ch))
	{
		std::cout << char(ch + 32);
	}
	else if (isLittleAlpha(ch))
	{
		std::cout << char(ch - 32);
	}
	else if (isDig(ch))
	{
		unsigned int digit = ch - '0';
		std::cout << digit << std::endl;
	}
	else
	{
		std::cout << "Not a letter and not a number between 0 and 9!" << std::endl;
	}
	
	
	


	


	return 0;
}