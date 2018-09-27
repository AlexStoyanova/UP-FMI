#include <iostream>
#include <stdlib.h>    
#include <time.h>    
#include <string.h>

using namespace std;

const char* exclamation[]{ "SHOK", "NECHUVANA NAGLOST", "SKANDAL", "UJAS", "LELEE" };
const char* object[]{ "Rqpa ", "Baba ", "Kmet ", "Bager ", "Kola", "Paqk", "Kuche", };
const char* subject[]{ "sklad.", "rqpa.", "kmet.", "ameba.", "bastun.", "tikvichki.", "sladoled." };
const char* action[]{ "sgazi ", "zadiga ", "namiga na ", "precakva ", "tarashi ", "tancuva vurhu ", "opipva ", "udrq "};
const unsigned int exclm = 5;
const unsigned int obj = 7;
const unsigned int subj = 7;
const unsigned int act = 8;


int main()
{
	unsigned int headings;
	cout << "Enter number of headings:" << endl;
	cin >> headings;
	for (int i = 0; i < headings; i++)
	{
		char*str = new(nothrow)char [strlen() + strlen() + strlen() + exclmark...] // neshto si 
	}
	srand(time(NULL));
	printf("Random number: %d\n", rand() % 100);



	return 0;
}
