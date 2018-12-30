#include <iostream>
#include <string.h>


char* m_strcpy(char *destination, char* source)
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

void all_Upper_Alpha(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
}

void all_Lower_Alpha(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
}

int main()
{
	const int MAX_SIZE = 50;
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);
	unsigned int len = strlen(str);
	char *my_str = new(std::nothrow) char[len + 1];
	if (my_str != nullptr)
	{
		m_strcpy(my_str, str);
		all_Lower_Alpha(my_str);
		std::cout << my_str;

		
	}
	delete[] my_str;

	return 0;
}