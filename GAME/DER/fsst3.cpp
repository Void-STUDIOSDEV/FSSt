#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
//required modules

void sleep(double seconds) {
    this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}

int main() {
	sleep(0.1); cout << "FIRE: SHORT STORY 03\n";
	sleep(0.2); cout << "Part of my first C++ Short Story.\n";
	sleep(0.3); cout << "I AM COMPLETELY NEW TO C++\n";
	sleep(0.4); cout << "Copyright under MIT License.\n";
	sleep(0.5); cout << "You walk through the forest with the man. He is bleeding heavy.\n";
	sleep(0.6); cout << "How will you stop it?\n";
	cout << "CHOICE: ";
	
	string choice;
	string schoice;
	
	while (true) {
		cin >> choice;
		for (char &c : choice) c = toupper(c);
		
		if (choice == "HELP") {
			sleep(0.5); cout << "[N]OTHING, [R]IP A PIECE OF YOUR SHIRT AND TIE IT AROUND HIS LEG AND ARM, [P]USH A STICK INTO THE WOUNDS AFTER USING YOUR LAST BOTTLE TO CLEAN IT\n";
			cout << "CHOICE: ";
		}
		
		else if (choice == "N") {
			cout << "You do not cover the wounds... He starts panting heavier. [P]ut cloth over the wounds or continue [I]gnoring it? ";
			cin >> schoice;
			for (char &c : schoice) c = toupper(c);
			if (schoice == "P") {
				sleep(0.5); cout << "You put cloth over it, while he is still doing bad, the blood stops leaking everywhere... 'Finally, the city...'\n";
				break;
			}
			else if (schoice == "I") {
				sleep(0.5); cout << "You ignore it.. He suddenly falls to the ground. His breathing starts to labour...";
				sleep(0.3); cout << "Come on.. Stay with me..! Shit.....";
				break;
			}
			
			else {
				cout << "INVALID.\n";
				cout << "CHOICE: ";
			}
		}
		
		else if (choice == "R") {
			sleep(.5); cout << "'Aghg, dammit, what the fuck?! A fucking stick!? What the hell is fucking wrong with you, you fucking idiot...!?";
			break;
		}
		
		else {
			cout << "INVALID.\n";
			cout << "CHOICE: ";
		}
		
	}	
		return 0;
}
