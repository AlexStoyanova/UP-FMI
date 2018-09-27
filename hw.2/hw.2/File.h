#ifndef __FILE_H__
#define __FILE_H__
#include "Line.h"
class File
{
	char* name;
	Line* lines;
	size_t countLines;

public:
	File();
	File(char* name, size_t countLines);
	~File();
	void readFile();




};

#endif