#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class StatBlock {

	public:
		string name;
		int perception;
		string languages[5];
		int str;
		int dex;
		int con;
		int intel;
		int wis;
		int cha;
		int ac;
		int fort;
		int ref;
		int will;
		int level;
		int hp;

};


int main() {
	srand (time(NULL));

	StatBlock troll;
	troll.name = "Troll";
	troll.languages[1] = "Jotun";
	troll.str = rand() % 20;
	troll.dex = rand() % 10;
	troll.con = rand() % 20;
	troll.intel = rand() % 7;
	troll.wis = rand() % 10;
	troll.cha = rand() % 7;
	troll.ac = rand() % (25 - 20);
	troll.fort = rand() % (24 + 20);
	troll.ref = rand() % (18 + 14);
	troll.will = rand() % (20 + 16);
	troll.level = rand() % (8 + 5);
	troll.hp = rand() % (150 + 100);

	cout << "Name: " << troll.name << endl;
	cout << "Level: " << troll.level << endl;
	cout << "HP: " << troll.hp << endl;
	cout << "STR: " << troll.str << endl;
	cout << "DEX: " << troll.dex << endl;
	cout << "CON: " << troll.con << endl;
	cout << "INT: " << troll.intel << endl;
	cout << "WIS: " << troll.wis << endl;
	cout << "CHA: " << troll.cha << endl;
	cout << "AC: " << troll.ac << endl;
	cout << "FORT: " << troll.fort << endl;
	cout << "REF: " << troll.ref << endl;
	cout << "WILL: " << troll.will << endl;
	
	return 0;
}
