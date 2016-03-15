#pragma once
#include <iostream>
#include <string>
using namespace std;




int Welcome_Message()
{
	char selection;
	int letters;

	cout << "Welcome to Hangman! " << endl;

	cout << "This is classic Hangman, please choose an option." << endl;

	do {
		cout << "================================" << endl;
		cout << "(1) New Game" << endl;
		cout << "(2) Stats" << endl;
		cout << "(3) Exit" << endl;
		cout << "================================" << endl;


		cin >> selection;

		switch (selection) {

		case 1:

			cout << "New Game" << '(1)' << endl;
			if (selection == '1') {
				cout << "Welcome to Hangman. " << endl;
				cout << " Choose how many letters you would like to solve for. " << endl;
				cin >> letters;
			}
			break;

		case 2:

			cout << "Stats " << '(2)' << endl;
			if (selection == '2') {
				cout << "Here are some stats! " << endl;
				cout << "Just kidding I need to implement this! XD " << endl;
			}

			break;

		case 3:

			cout << "Exit" << '(3)' << endl;
			if (selection == '3') {
				return 0;
			}

			break;


		default: cout << "That selection is invalid. " << endl;

		} 


	} while (selection != 0);


}
