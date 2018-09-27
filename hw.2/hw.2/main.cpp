#include <iostream>
#include "File.h"
#include <fstream>
using namespace std;
using std::ifstream;

int main(int argc, char* argv[]) {
	int countlines = 0;
	std::ifstream file (argv[1]);
	if (!file.is_open()) {
		cout << "Not open" << endl;
	}
	char line[1024] = {0};
	while (!file.eof()) {
		file.getline(line, 1024);
		countlines++;
	}
	File* file1 = new File(argv[1], countlines);
	file1->readFile();
	file.close();



	return 0;
}