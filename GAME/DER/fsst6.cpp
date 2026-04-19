#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
//the req modules

void sleep(double seconds) {
    this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}
double health = 100.0;
//non-area-specific variables

string choice;
string inchoice;
string inchoice2;
string inchoice3;
string inchoice4;

int main() {
	sleep(0.1); cout << "FIRE: SHORT STORY 06\n";
	sleep(0.2); cout << "Part of my first C++ Short Story.\n";
	sleep(0.3); cout << "I AM COMPLETELY NEW TO C++\n";
	sleep(0.4); cout << "Copyright under MIT License.\n";
	sleep(0.5); cout << "You made it out of the forest, into a city. What will you do?\n";
	cout << "CHOICE: ";
	
	while (true) {
		cin >> choice;
		for (char &c : choice) c = toupper(c);
		
		if (choice == "HELP") {
			sleep(0.5); cout << "[E]nter the store, [W]alk the street, [L]ook around\n";
			cout << "CHOICE: ";
		}
		
		else if (choice == "E") {
			sleep(0.5); cout << "You enter the store, no security, one camera... [S]teal some food or [N]o?\n";
			cout << "CHOICE ";
			cin >> inchoice;
			for (char &c : inchoice) c = toupper(c);
			
			if (inchoice == "S") {
				sleep(0.5); cout << "You get cuaght! Off to jail you go!";
				break;
			}
			else if (inchoice == "N") {
				sleep(0.5); cout << "You walk out of the store, a man stops you on the street. 'Aye, give me everything you got!' he says...\n";
				sleep(0.5); cout << "[D]o you, or [N]o?\n";
				sleep(0.5); cout << "CHOICE: ";
				cin >> inchoice2;
				for (char &c : inchoice2) c = toupper(c);
				
				if (inchoice2 == "D") {
					sleep(0.5); cout << "The man laughs, shooting you anyways. 'fool.'\n";
					cout << "HEALTH: ";
					health -= 100;
					cout << health << "\n";
					break;
				}
				else if (inchoice2 == "N") {
					sleep(0.5); cout << "I did not ask! Fucking bastard!\n";
					cout << "HEALTH: ";
					health -= 100;
					cout << health << "\n";
					break;
				}
				else {
					cout << "INVALID. ENDING PROGRAM.\n";
				}
				
				break;
			}
			
			break;
		}
		
		if (choice == "W") {
			sleep(0.5); cout << "You walk down the street. A man stops you....\n";
			sleep(0.5); cout << "[G]ive him your money, or [N]o?\n";
			cout << "CHOICE: ";
			cin >> inchoice3;
			for (char &c : inchoice3) c = toupper(c);
			
			if (inchoice3 == "G") {
				sleep(0.5); cout << "Thanks, bitch. Now fuck off.\n";
				sleep(0.5); cout << "You just got robbed! Loser!!\n";
				break;
			}
			if (inchoice3 == "N") {
				sleep(0.5); cout << "Dumbass. Fuck you.\n";
				cout << "HEALTH: ";
				health -= 100;
				cout << health << "\n";
				break;
			}
			else {
				cout << "INVALID. ENDING PROGRAM.\n";
				break;
			}
			
			break;
			
		}
		
		if (choice == "L") {
			sleep(0.5); cout << "Looking around did not help. 'Aye, give me what you got!'\n";
			cout << "[Y]es or [N]o?\n";
			cout << "CHOICE: ";
			cin >> inchoice4;
			for (char &c : inchoice4) c = toupper(c);
			
			if (inchoice4 == "Y") {
				sleep(0.5); cout << "Here! Please do not hurt me! you say.... Loser!\n";
				break;
			}
			if (inchoice4 == "N") {
				sleep(0.5); cout << "Fuck you! You are not getting my stuff. Work for iy yourself-\n";
				cout << "Did not work out well, huh?\n";
				cout << "HEALTH: ";
				health -= 100;
				cout << health << "\n";
				cout << "Just to rub salt and spit into the wound.\n";
				break;
			}
			else {
				cout << "INVALID, ENDING PROGRAM.\n";
				break;
			}
			
			break;
		}
		
	}	
	
	return 0;
}
