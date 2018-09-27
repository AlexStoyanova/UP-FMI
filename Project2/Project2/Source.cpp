#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <string.h>
using namespace std;

const int max_mistakes = 5;

const char * Words[] = { "apple", "orange", "month", "vehicle" };
const unsigned int WordsCount = 4;


int main()
{
	srand((unsigned int)time(NULL));
	int index_word = rand() % WordsCount;
	printf("Random number: %d\n", index_word);
	const char* word = Words[index_word];
	cout << word << endl;
	int word_lenght = strlen(word);
	char historyArray[26];
	int indexInHistoryArray = 0;
	int mistakes = 0;
	/*char mistake(char word[], char word_lenght, char historyArray);
	{
		bool makemis = false;
		for (int i = 0; i < word_lenght; i++)
		{
			for (int j = 0; j < indexInHistoryArray; j++)
			{
				if (word[i] == historyArray[j])
				{
					makemis = true;
					break;
				}
			}
			if (makemis)
			{
				cout << word[i] << ' ';
			}
			else
			{
				cout << "_ ";
				mistakes++;
			}
			return mistakes;
		}
	}*/
	while (mistakes < max_mistakes)
	{
		char letter;
		cin >> letter;
		historyArray[indexInHistoryArray] = letter;
		indexInHistoryArray++;
		cout << '[' << mistakes << '/' << max_mistakes << ']' << endl;
		for (int i = 0; i < word_lenght; i++)
		{
			bool isSuchLetter = false;
			for (int j = 0; j < indexInHistoryArray; j++)
			{
				if (word[i] == historyArray[j])
				{
					isSuchLetter = true;
					break;
				}
			}
			if (isSuchLetter)
			{
				cout << word[i] << ' ';
			}
			else
			{
				cout << "_ ";
			}
		}

	}




	//cout << "Guess the word (max 5 mistakes):";




	return 0;
}
