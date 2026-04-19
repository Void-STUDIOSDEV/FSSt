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
double bear_health = 200.00;
//non-area-specific variables

int main() {
	sleep(0.1); cout << "FIRE: SHORT STORY 05\n";
	sleep(0.2); cout << "Part of my first C++ Short Story.\n";
	sleep(0.3); cout << "I AM COMPLETELY NEW TO C++\n";
	sleep(0.4); cout << "Copyright under MIT License.\n";
	sleep(0.5); cout << "You are in a forest.\n";
	sleep(0.6); cout << "What will you do\n";
	cout << "CHOICE: ";
	
	
	string choice;
	string inchoice;
	
	string inchoice2;
	string dinchoice2;
	
	string inchoice3;
	string dinchoice3;
	
	
	while (true) {
		cin >> choice;
		for (char &c : choice) c = toupper(c);
		
		if (choice == "HELP") {
			sleep(0.5); cout << "[L]ook around, [O]pen your bag and look, [R]est";
			cout << "CHOICE: ";
		}
			
			if (choice == "L") {
				cout << "You walk around, not finding anything. Seems you are doomed... [G]ive up, [C]ontinue?\n";
				cout << "CHOICE: ";
				cin >> inchoice;
				for (char &c : inchoice) c = toupper(c);
				
				if (inchoice == "G") {
					cout << "You lay down on the ground....\n";
					break;
				}
				else if (inchoice == "C") {
					cout << "You walk around, not finding anything....\n";
					break;
				}
				else {
					cout << "INVALID. ENDING PROGRAM.";
					break;
				}
				break;
			}
			
			else if (choice == "O") {
				cout << "You open the bag. Nothing besides a small knife, water, and bagged food. Eat the [F]ood, [D]rink the water, or [NO]thing?\n";
				cout << "CHOICE: ";
				cin >> inchoice2;
				for (char &c : inchoice2) c = toupper(c);
				
				if (inchoice2 == "F") {
					cout << "You eat the food!\n";
					health += 50;
					cout << "HEALTH: " << health << "\n";
					cout << "\n\nYou walk through the forest. A bear! [A]ttack or [S]lowly back away while making yourself larger?\n";
					cout << "CHOICE: ";
					cin >> dinchoice2;
					for (char &c : dinchoice2) c = toupper(c);
					
					if (dinchoice2 == "A") {
						cout << "Fool....\n";
						cout << "HEALTH: ";
						health -= 150;
						cout << health << "\n";
						cout << "BEAR'S HEALTH: ";
						bear_health -= 2;
						cout << bear_health << "\n";
						break;
					}
					if (dinchoice2 == "S") {
						cout << "Well, you tried. Should have worked..\n";
						cout << "HEALTH: ";
						health -= 150;
						cout << health << "\n";
						break;
					}
					else {
						cout << "INVALID. ENDING PROGRAM\n";
						break;
					}
				}
				
				if (inchoice2 == "D") {
					cout << "You drink the water... Turns out it is poison!\n";
					break;
				}
				
				else {
					cout << "INVALID. STOPPING PROGRAM.\n";
				}
			}
			
			else if (choice == "R") {
				cout << "You lay down with a tree... Snakes are in forests, man.\n";
				cout << "HEALTH: ";
				health -= 100;
				cout << health << "\n";
				break;
			}
			
			else {
				cout << "INVALID. TRY AGAIN\n";
				cout << "CHOICE: ";
			}
			
	}
		
	return 0;
}
