#pragma once
#include <iostream>
#include <string>
#include "Game.h"
#include "Stats.h"
using namespace std;

int Welcome_Message()
{
	string selection;
	int num_Letters;
	bool accepted = true;

	cout << "Welcome to Hangman! " << endl;

	do {
		do {
			cout << "This is classic Hangman, please choose an option." << endl;

			cout << "================================" << endl;
			cout << "(1) New Game" << endl;
			cout << "(2) Stats" << endl;
			cout << "(3) Exit" << endl;
			cout << "================================" << endl;
			cin >> selection;

		} while (selection != "1" && selection != "2" && selection != "3");

		int select = selection[0] - '0';
		switch (select) {

		case 1:	cout << "New Game" << endl;
			cout << "Choose how many letters you would like to solve for." << endl;
			cin >> num_Letters;
			system("cls");
			//function for the game passing in parameters of the num_letters or difficulty level? 
			break;

		case 2:	system("cls");
			cout << "TOP TEN" << endl;
			cout << "================================" << endl;
			//function that pulls up the top 10 stats for that machine (create files)
			system("pause");
			break;

		case 3:	cout << "Exit" << endl;
			return 0;

		default: cout << "That selection is invalid. Try a different menu option." << endl;
			system("pause");
			break;
		}
		system("cls");	//keep screen clean and looking nice
	} while (selection != "3");
}
