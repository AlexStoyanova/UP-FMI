#include <iostream>
using namespace std;

const unsigned int MAX_HEALTH_P = 100;
const unsigned int DAMAGE_P = 10;
const unsigned int ARMOUR_P = 25;
const unsigned int LUCK_P = 5;
const unsigned int MAGIC_POTION_P = 5;
const unsigned int MAX_HEALTH_M = 50;
const unsigned int DAMAGE_M = 5;
const unsigned int ARMOUR_M = 5;
const unsigned int LUCK_M = 0;


void everyTurnOptions() 
{
	cout << "----------------------------------------" << endl;
	cout << "What is your choise?" << endl;
	cout << "[i]nformation" << endl;
	cout << "[a]ttack" << endl;
	cout << "[d]efence" << endl;
	cout << "[p]otion" << endl;
	cout << "e[x]it" << endl;
}


int main() {
	unsigned int level_m = 0;
	unsigned int health_p = MAX_HEALTH_P;
	unsigned int health_m = MAX_HEALTH_M;
	unsigned int damage_m = DAMAGE_M;
	unsigned int damage_p = DAMAGE_P;
	unsigned int armour_p = ARMOUR_P;
	unsigned int armour_m = ARMOUR_M;
	unsigned int magic_potion = MAGIC_POTION_P;
	unsigned int luck_p = LUCK_P;




	while (true)
	{
		system("cls");
		everyTurnOptions();

		char option;

		while (true) {
			cin >> option;
			if (option == 'i' || option == 'a' || option == 'd' || option == 'p' || option == 'x') {
				break;
			}
			else {
				cout << "Are you drunk? No battle with monsters for drunk knight! GO 127.0.0.1" << endl;
			}
		}

		switch (option)
		{
			case 'i': {
				cout << "You choose information!!!" << endl;
				break;
			}
			case 'a': {
				cout << "You choose attack!!!" << endl;
				break;
			}
			case 'd': {
				cout << "You choose defence!!!" << endl;
				break;
			}
			case 'p': {
				cout << "You choose to drink a potion!!!" << endl;
				break;
			}
			case 'x': {
				cout << "You choose to exit the game!!!" << endl;
				break;
			}
		}

	}



	return 0;
}