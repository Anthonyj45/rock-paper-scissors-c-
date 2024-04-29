/* -- this is a FILEHEADER COMMENT --
	NAME	:	testPlay.cpp
	PURPOSE :	This program will allow the user to select from
				3 possible options, Rock, Paper or Scissors, to
				play a funny game against the Computer and 
				displaying a message to inform to the user if 
				he/she won, lost, or tied with the computer.

				To make this, it will be necessary implement
				multiple resources from Object Oriented
				Programming and use the best practices to keep
				a clean and detailed code.
*/

#include <iostream>
#include <conio.h>
#include <new.h>
#include <string.h>
#include "playGame.h"
#pragma warning(disable: 4996) // required by Visual Studio

using namespace std;

#define EXIT -1;

int main(void)
{
	int user_select = 0;

	cout << "Please, introduce a number: \nEnter 1 for Rock\nEnter 2 for Paper\nEnter 3 for Scissors\nOption: ";
	cin >> user_select;

	playGame* gameStarted = new playGame(user_select);
	if (gameStarted == NULL)
	{
		cout << "Not enough memory to allocate" << endl;
		return EXIT;
	}

	return 0;
}