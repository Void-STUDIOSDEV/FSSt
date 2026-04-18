#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
//required modules

void sleep(double seconds) {
    this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}
//this allows pausing the program before a print temporarily

int main() {
	string pass = "EHLOL";
	string choice;
	
	while (true) {
		cout << "\nDecrypt the word: EHLOL\n";
		cout << "HERE: ";
		cin >> choice;
		for (char &c : choice) c = toupper(c);
		
		if (choice == "HELLO") {
			sleep(0.6); cout << "YOU GOT IT CORRECT!\n";
			break;
		}
		
		else {
			sleep(0.3); cout << "WRONG\n";
		}
	}
	
	return 0;
}
