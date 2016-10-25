#include <iostream>
#include "Main_Menu.h"
using namespace std;

int main() {
	Welcome_Message();

	return 0;

}

/*
QUESTIONS:

* Should we have a text file with lists of words organized by letter count for the application to pull from?
* Is this program going to be one player? Against the computer? An option for both?
* Should we do levels instead of number of letters? (could possibly have a text file for each level, easier to pull from?)
*/



// I was thinking that this game is potentially multiple players and/or against the system.
// Also is there a way that we can have a randomly created string of english words based on the number of letters input?
// Levels could be interesting, I am not quite sure how that would work though with a game like hangman.