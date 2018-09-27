#include "Line.h"
#include <string.h>

Line::Line()
{
	words = new Word[512];
}

Line::Line(size_t number, char* content) : number(number)
{
	int countwords = 0;
	char* pch;
	char* nextToken;
	pch = strtok_s(content, " ", &nextToken);
	
	while (pch)
	{
		pch = strtok_s(NULL, " ", &nextToken);
		countwords++;
	}
	words = new Word[countwords];
	countWords = countwords;
	int i = 0;
	nextToken = nullptr;
	pch = strtok_s(content, " ", &nextToken);
	while (pch)
	{
		Word* word = new Word(i + 1, pch);
		words[i] = *word;
		pch = strtok_s(NULL, " ", &nextToken);
	}
}

Line::~Line()
{
	delete[] words;
}

Word& Line::getWord(size_t index)
{
	return words[index];
}

void Line::makeHeading()
{
}

void Line::makeItalic()
{
}

void Line::makeBold()
{
}

void Line::makeCombine()
{
}

void Line::addLine()
{
}

void Line::removeLine()
{
}

void Line::exit()
{
}
