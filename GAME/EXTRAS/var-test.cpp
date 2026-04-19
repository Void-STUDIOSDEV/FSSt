#include <iostream> //allows basic input/output
#include <chrono> //used for high-precision time measurements and date management. Providing Clocks, Durations, and Time Points
#include <thread> //allows to perform multiple tasks at once, through multi-threading. Concurrent execution, enables different functions to run simultaneously, improving performance. Thread management, using thread class to create, launch, and manage threads. Synchonrizatioon, often works alongside synch tools to ensure threads do not clash when accessing shared memory
#include <string> //provides string class, which is the standard way to store and manipulate sequences of text in CPP. Automatic memory management, Built-In Operations, Type Safety
using namespace std;


int number = 5; //stores whole values, cannot store decimal numbers. 4 bytes (32 bits, modern system).
double number2 = 5.11; //Stores fractions and decimal numbers with high precision. 8 bytes (64 bits), can hold 15 decimal digits.
char word = 'A'; //stores a single character, digit, symbol, or a letter. Uses '' not "". 1 byte (8 bit)
bool hello = true; //Stores values that represent true or false. Typically 1 byte (8 bit). True is internally 1, False is internally 0.
string yellow = "Yellow"; //A sequence of characters used to represent text. "string" provides automatic memory management plus extensive built-in functions
double health = 100.0;


int main() {
	while (true) {
		cout << "THIS IS 5: ";
		cout << number;
		cout << "\nThis is 5.11: ";
		cout << number2;
		cout << hello << "\n";
		cout << boolalpha << hello << "\n";
		cout << yellow;
		
		cout << (health - 4) << "\n"; //changes it once
		/*health -= 4;
		cout << health << "\n";*/ //this changes it permanently
		break;
	}
	return 0;
}
