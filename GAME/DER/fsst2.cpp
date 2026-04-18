#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
/*the required modules
 * will not use namespace std for this*/

void sleep(double seconds) {
    this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}


int main() {
	cout << "FIRE: SHORT STORY 02\n";
	cout << "Part of my first C++ Short Story.\n";
	cout << "I AM COMPLETELY NEW TO C++\n";
	cout << "Copyright under MIT License.\n";
	cout << "The fire goes out.. You instantly go to searching, you find one person...\n";
	cout << "What do you do?\n";
	cout << "CHOICE: ";
	
	string choice;
	
	while (true) {
		cin >> choice;
		for (char &c : choice) c = toupper(c);
	
		if (choice == "HELP") {
			sleep(0.5); cout << "[N]OTHING, [T]ALK, [K]ILL, [HE]LP THEM: ";
		}
	
		else if (choice == "N") {
			sleep(0.5); cout << "You stare at the man.. He has not noticed you, as he is in the fetal position.... You slowly walk off, being as quiet as you can...\n";
			break;
		}
	
		else if (choice == "T") {
			sleep(0.5); cout << "'An animal attacked.. Knocked over our grill, causing a fire.... I ran, but it almost cought me. My damn arm is bleeding.. Please help me...";
			break;
		}
	
		else if (choice == "K") {
			sleep(0.5); cout << "You pull out a knife... You put it to his throat, suprising him. 'What are you dooing?! Please do not k-!'";
			break;
		}
	
		else if (choice == "H") {
			sleep(0.5); cout << "'Thank you.. My leg is hurt badly, so is my amr. You are helping me a lot, man...\n";
			break;
		}
	
		else {
			cout << "INVALID INPUT. TRY AGAIN: ";
		}
	}
		return 0;
}
