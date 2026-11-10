#include <stdio.h>
#include <stdlib.h>
#define STR_CAP 300

// source for all ascii art: https://www.asciiart.eu/buildings-and-places

void introMenu(void); // the beginning of the adventure

void clearScreen(void); // command to clear the screen depending on certain player inputs

void trainScene(void); // train scene where player looks at their ticket and sees their name

struct Player {

	float  playerHP;
	char playerName[STR_CAP + 1];
};

char getName(struct Player player); // get name ?