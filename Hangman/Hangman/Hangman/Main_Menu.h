#pragma once
#include <iostream>
#include <string>
using namespace std;




int Welcome_Message()
{
	int selection;
	int num_Letters;

	cout << "Welcome to Hangman! " << endl;

	cout << "This is classic Hangman, please choose an option." << endl;


		cout << "================================" << endl;
		cout << "(1) New Game" << endl;
		cout << "(2) Stats" << endl;
		cout << "(3) Exit" << endl;
		cout << "================================" << endl;


		cin >> selection;


		switch (selection) {

		case 1:
			cout << "New Game" << endl;
			if (selection == 1) {
				cout << "Welcome to Hangman. " << endl;
				cout << " Choose how many letters you would like to solve for. " << endl;
				cin >> num_Letters;
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


			else cout << "That selection is invalid. " << endl;

			break;

			}


		 


	


}
