#ifndef _LINE_
#define _LINE_ 
#include "word.h"
class line
{
	int number;
	word words[];
public:
	line();
	~line();
};

#endif