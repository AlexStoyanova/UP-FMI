#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <string.h>
using namespace std;

const int max_mistakes = 5;

const char * Words[] = { "apple", "orange", "month", "vehicle" }; // h p -> _ p p _ _
const unsigned int WordsCount = 4;


int main()
{
	srand(time(NULL));
	int index_word = rand() % WordsCount;
	printf("Random number: %d\n", index_word);
	const char* word = Words[index_word];
	cout << word << endl;
	int word_lenght = strlen(word);
	char historyArray[26];
	int indexInHistoryArray = 0;
	int mistakes = 0;
	while (mistakes < max_mistakes )
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
				//mistakes++; 
			}
			mistakes++;
		}
		for (int i = 0; i < indexInHistoryArray; i++)
		{
			cout << historyArray[i] << ' ';
		}
		
	}




	//cout << "Guess the word (max 5 mistakes):";




	return 0;
}
