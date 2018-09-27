#ifndef __WORD_H__
#define __WORD_H__
class Word
{
	int number;
	char* value;
public:
	Word();
	Word(int, char*);
	~Word();
	char* getValueOfWord() const;
};

#endif