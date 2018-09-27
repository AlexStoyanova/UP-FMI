#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	char c;
	ifstream myFile(__FILE__);
	if (!myFile.is_open())
	{
		cout << "File is not open!" << endl;
		return -1;
	}
	while (!myFile.eof())
	{
		myFile.get(c);
		if (myFile)
			cout << c ;
	}
	myFile.close();
	return 0;
}