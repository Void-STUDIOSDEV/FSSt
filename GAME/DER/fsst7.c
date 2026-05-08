#include <stdio.h>
#include <stdbool.h>

int i; // allows one character input
char si; // allows users to do inputs a second time

int main() {
	printf("Fire Short Story 07\n");
	printf("My old C++ skills test stories remade to be in C\n");
	printf("I AM COMPLETELY NEW TO C\n");
	printf("Copyright under MIT license\n\n");
	printf("Staying in a hotel.. You and the man are relaxing finally. You hear a knock and a woman pleading to let you in\n");
	printf("1. You open the door | 2. You ask who is outside | 3. Ignore the person\n");
	printf("CHOICE: ");
	
	scanf(" %d", &i);
	
	if (i == 1) {
		printf("\nYou open the door. You see a crying woman with a child.. You bring her in, you feel a sharp pain in your back ...\n");
	}
	
	else if (i == 2) {
		printf("\nAsking who it is, she does not respond. Bullets rip through the door, killing you ... Perhaps not stand in front of the door?\n");
	}
	
	else if (i == 3) {
		printf("\nYou ignore it, you hear footsteps get louder. Get under the [b]ed ot hide in the [c]loset?\n");
		printf("CHOICE: ");
		
		scanf(" %c", &si);
		
		if (si == 'b') {
			printf("\nYou hide under the bed alongside the man. People walk around, finding nothing and leave ...\n");
		}
		else if (si == 'c') {
			printf("\n'Found you! Piece of shit' the man screams out as he shoots you, then takes the money off your body\n");
		}
		else {
			printf("INVALID. TRY AGAIN.\n");
		}
	}
	
	else {
		printf("INVALID. TRY AGAIN.\n");
	}
	
	return 0;
}
