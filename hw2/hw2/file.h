#ifndef _FILE_
#define _FILE_ 
#include "line.h"
class file
{
	char* name;
	line* lines;
public:
	file();
	~file();
};

#endif