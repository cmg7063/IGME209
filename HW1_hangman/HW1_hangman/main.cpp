// Corinne Green
// IGME 209.04
// February 3, 2016
// main.cpp - creates char arrays necessary for Hangman; introduces the 
// game and runs the processInput and showGallows methods

#include <iostream>
#include <string>
#include "hangmanfuncs.h"

using namespace std;

int main()
{
	char incorrectGuesses[27] = "";
	char hiddenWord[] = "potato";
	char displayWord[7] = "______";
	bool won = false;

	cout << "Let's play Hangman!\n";
	cout << "Your word has " << strlen(hiddenWord) << " letters in it.\n\n";

	while (!won)
	{
		showGallows(strlen(incorrectGuesses));

		cout << "Word to solve: " << displayWord << "\n";
		cout << "Wrong guesses: " << incorrectGuesses << "\n\n";

		processInput(hiddenWord, displayWord, incorrectGuesses);

		if (!strchr(displayWord, '_'))
		{
			cout << "You won!!\n";
			break;
		}

		if (strlen(incorrectGuesses) == 7)
		{
			cout << "You lost!\n";
			break;
		}
	}
	cout << "Press any key to close the program";
	cin.ignore();
	cin.get();
}