#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class StatBlock {

	public:
		string name;
		int perception;
		std::vector<std::string> languages;
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

set<string> convertToSet(vector<string> v) {
	set<string> s;

	for (string x : v) {
		s.insert(x);
	}

	return s;
}


int main() {
	string availableLanguages[23];
	availableLanguages[0] = "Common";
	availableLanguages[1] = "Draconic";
	availableLanguages[2] = "Dwarven";
	availableLanguages[3] = "Elven";
	availableLanguages[4] = "Gnomish";
	availableLanguages[5] = "Goblin";
	availableLanguages[6] = "Halfling";
	availableLanguages[7] = "Jotun";
	availableLanguages[8] = "Orcish";
	availableLanguages[9] = "Sylvan";
	availableLanguages[10] = "Undercommon";
	availableLanguages[11] = "Abyssal";
	availableLanguages[12] = "Aklo";
	availableLanguages[13] = "Aquan";
	availableLanguages[14] = "Auran";
	availableLanguages[15] = "Celestial";
	availableLanguages[16] = "Gnoll";
	availableLanguages[17] = "Ignan";
	availableLanguages[18] = "Infernal";
	availableLanguages[19] = "Necril";
	availableLanguages[20] = "Shadowtongue";
	availableLanguages[21] = "Terran";
	availableLanguages[22] = "Druidic";

	srand (time(NULL));

	StatBlock troll;
	troll.name = "Troll";
	int randNumLang;
	randNumLang = 1 + rand() % 21;
	for (int i = 0; i < randNumLang; i++) {
		int randIndex;
	       	randIndex = rand() % 22;
		troll.languages.push_back(availableLanguages[randIndex]);
	}	
	set<string> trollLanguages = convertToSet(troll.languages);

	std::vector<string> trollLanguagesVector(trollLanguages.size());
	std::copy(trollLanguages.begin(), trollLanguages.end(), trollLanguagesVector.begin());

	troll.str = 20 + (rand() % 6);
	troll.dex = 5 + (rand() % 5);
	troll.con = 18 + (rand() % 6);
	troll.intel = 1 + (rand() % 7);
	troll.wis = 2 + (rand() % 8);
	troll.cha = 2 + (rand() % 7);
	troll.ac = 20 + (rand() % 5);
	troll.fort = 20 + (rand() % 4);
	troll.ref = 14 + (rand() % 4);
	troll.will = 16 + (rand() % 4);
	troll.level = 5 + (rand() % 3);
	troll.hp = 100 + (rand() % 50);

	cout << "Name: " << troll.name << endl;
	cout << "Level: " << troll.level << endl;
	cout << "Languages: ";

	for (int i = 0; i < trollLanguagesVector.size(); i++) {
		if (i != 0) {
			cout << ", ";
		}
		cout << trollLanguagesVector[i];
	}
	cout << endl;
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
