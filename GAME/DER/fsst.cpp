#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
//the required modules and variables


void sleep(double seconds) {
    this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}

int main() {
	cout << "FIRE: SHORT STORY 01\n";
			cout << "My first CPP/C++ Short Story!\n";
	cout << "I AM COMPLETELY NEW TO CPP / C++\n";
	cout << "You walk through the forest... You see fire.... WHAT DO YOU DO?\n";

	string choice;
	
	while (true) {
		cin >> choice;
		for (char &c : choice) c = toupper(c);
	
		if (choice == "HELP") {
			sleep(0.5); cout << "[P]UT OUT FIRE, [N]OTHING, [S]EARCH FOR SURVIVORS: ";
		}
		
		else if (choice == "P") {
			sleep(0.5); cout << "You step on the fire... It grows... 'NO! PLEASE, NO! PLEASE- GHAGHGHAHHGH!........\n";
			break;
		}
		
		else if (choice == "N") {
			sleep(0.5); cout << "You watch the fire... it surrounds and desroys everything...\n";
			break;
		}
		
		else if (choice == "S") {
			sleep(0.5); cout << "You scream and walk around, will you find anyone?\n";
			break;
		}
		
		else {
			cout << "NOT A VALID CHOICE. DO A VALID CHOICE: ";
		}
	}
		return 0;
}
