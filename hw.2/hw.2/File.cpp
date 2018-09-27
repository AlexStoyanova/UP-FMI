#include <iostream>
#include <fstream>
#include "File.h"
#include "Line.h"
#include <string.h>

using std::cout;
using std::endl;

File::File()
{
}

File::File(char * myName, size_t countLines) : countLines(countLines)
{
	size_t length = strlen(myName) + 1;
	name = new char[length];
	strcpy_s(name, length, myName);
	lines = new Line[countLines];

}


File::~File()
{
	delete[] name;
	delete[] lines;
}

void File::readFile()
{
	std::ifstream file(this->name);
	if (!file.is_open()) {
		cout << "Not open" << endl;
		return;
	}
	char content[1024];
	size_t i = 0;
	while (file) {
		file.getline(content, 1024);
		if (i == countLines) {
			break;
		}
			
			
		if (file.good()) {
			Line* line = new (std::nothrow) Line(i + 1, content);
			lines[i] = *line;
			i++;
		}
		else {
			file.close();
			return;
		}
	}

	file.close();
}
