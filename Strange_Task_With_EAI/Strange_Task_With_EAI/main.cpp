#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	char words[SIZE][SIZE] = { "ali", "duma", "shokolad", "torta", "qgoda", "lista", "kalinka", "rozovo", "sladur", "slunce"};
	char letter;
	cout << "Enter a letter: " << endl;
	cin >> letter;
	bool isLetter = true;
	if (letter >= 'a' && letter <= 'z')
	{
		for (int i = 0; i < 10; i++)
		{
			char *ptr = words[i] + 1;
			if (words[i][0] == letter)
			{
				cout << "Word without " << letter << " is: " << endl;
				cout << ptr << endl;
				isLetter = false;
			}
		}
	}
	if (isLetter)
	{
		cout << "Not such a word with this letter!" << endl << "0" << endl;
	}

	return 0;
}
