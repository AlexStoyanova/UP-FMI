#ifndef __LINE_H__
#define __LINE_H__
#include "Word.h"
class Line
{
	int number;
	Word* words;
	size_t countWords;
public:
	Line();
	Line(size_t number, char* content);
	~Line();
	Word& getWord(size_t index);
	void makeHeading();
	void makeItalic();
	void makeBold();
	void makeCombine();
	void addLine();
	void removeLine();
	void exit();
};

#endif