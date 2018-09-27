#include "Word.h"
#include <string.h>



Word::Word()
{
}

Word::Word(int num, char* val) : number(num)
{
	size_t lenght = strlen(val) + 1;
	value = new char[lenght];
	strcpy_s(value, lenght, val);
}


Word::~Word()
{
	delete[] value;
}

char* Word::getValueOfWord() const
{
	return this->value;
}
