#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
//required modules

void sleep(double seconds) {
    this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}
double health = 100.0;
//non-area-specific variables


int main() {
	sleep(0.1); cout << "FIRE: SHORT STORY 04\n";
	sleep(0.2); cout << "Part of my first C++ Short Story.\n";
	sleep(0.3); cout << "I AM COMPLETELY NEW TO C++\n";
	sleep(0.4); cout << "Copyright under MIT License.\n";
	sleep(0.5); cout << "You are lost in the forest.\n";
	sleep(0.6); cout << "How will you do\n";
	cout << "CHOICE: ";
	
	string choice;
	string schoice;
	string choice3;
	
	while (true) {
		cin >> choice;
		for (char &c : choice) c = toupper(c);
		
		if (choice == "HELP") {
			sleep(0.5); cout << "[S]et up camp, [C]ontinue walking, [L]ook around\n";
			cout << "Health: " << health << "\n";
			cout << "CHOICE: ";
		}
		
		else if (choice == "S") {
			sleep(0.5); cout << "After setting up the tent, you and the man falls alseep, his bleeding has stoppped, but for how long?\n";
			break;
		}
		
		else if (choice == "C") {
			sleep(0.5); cout << "As you are walking, you see a bear. and it has seen you... [R]UN.... [W]ALK AWAY SLOWLY WHILE FACING IT";
			cout << "\nCHOICE: ";
			cin >> schoice;
			for (char &c : schoice) c = toupper(c);
			
			if (schoice == "R") {
				cout << "It chases you. You feel a sharp pain in your back. There is heavy breathing on your throat...";\
				break;
			}
			if (schoice == "W") {
				cout << "You slowly back away, standing tall, making noises.. It slowly backs off. You survived your first bear attack!\n";
				cout << "Health " << health << "\n";
				break;
			}
			else {
				cout << "INVALID. ENDING PROGRAM";
				break;
			}
		}
		
		else if (choice == "L") {
			cout << "You look around. You find a [K]nife and a full bottle of [W]ater. You can only hold one, which one do you take?";
			cout << "\nCHOICE: ";
			cin >> choice3;
			for (char &c : choice3) c = toupper(c);
			
			if (choice3 == "K") {
				cout << "You take the knife, clearing bushes easier. FInally, you have made it to civilization..\n";
				break;
			}	
			if (choice3 == "W") {
				cout << "You take the water, but due to the density of bushes, you cabbot go through most of them. So close....\n";
				break;
			}
			else {
				cout << "INVALID. ENDING PROGRAM.\n";
				break;
			}
		}
		
		else {
			cout << "INVALLID. TRY AGAIN.\n";
			cout << "CHOICE: ";
		}
		
	}
	
	return  0;
}
