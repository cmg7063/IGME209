// Corinne Green
// IGME 209.04
// February 3, 2016
// hangmanfuncs.cpp - showGallows() draws ASCII art to the console window 
// dependent on the number of incorrect guesses. processInput loops getting 
// input until a valid input is given

#include "hangmanfuncs.h"
#include <iostream>;
#include <string>;

using namespace std;
void showGallows(int numBadGuesses)
{
	switch (numBadGuesses) 
	{
	case 0:
		cout << " _______     \n";
		cout << "|            \n";
		cout << "|            \n";
		cout << "|            \n";
		cout << "|            \n";
		cout << "|            \n";
		cout << "|            \n";
		break;

	case 1:
		cout << " _______     \n";
		cout << "|       |    \n";
		cout << "|       0    \n";
		cout << "|            \n";
		cout << "|            \n";
		cout << "|            \n";
		cout << "|            \n";
		break;

	case 2:
		cout << " _______     \n";
		cout << "|       |    \n";
		cout << "|       0    \n";
		cout << "|       |    \n";
		cout << "|       |    \n";
		cout << "|            \n";
		cout << "|            \n";
		break;

	case 3:
		cout << " _______     \n";
		cout << "|       |    \n";
		cout << "|       0    \n";
		cout << "|      /|    \n";
		cout << "|       |    \n";
		cout << "|            \n";
		cout << "|            \n";
		break;

	case 4:
		cout << " _______     \n";
		cout << "|       |    \n";
		cout << "|       0    \n";
		cout << "|      /|\   \n";
		cout << "|       |    \n";
		cout << "|            \n";
		cout << "|            \n";
		break;

	case 5:
		cout << " _______     \n";
		cout << "|       |    \n";
		cout << "|       0    \n";
		cout << "|      /|\   \n";
		cout << "|       |    \n";
		cout << "|      /     \n";
		cout << "|            \n";
		break;

	case 6:
		cout << " _______     \n";
		cout << "|       |    \n";
		cout << "|       0    \n";
		cout << "|      /|\   \n";
		cout << "|       |    \n";
		cout << "|      / \   \n";
		cout << "|            \n";
		break;
	}
}

void processInput(char hiddenWord[], char displayWord[], char incorectGuesses[])
{
	cout << "What letter do you guess next? ";
	char guess;
	cin >> guess;
	cout << "Guess: " << guess << "\n\n";

	if (strchr(incorectGuesses, guess) || strchr(displayWord, guess))
	{
		cout << "You already guessed " << guess << ". Guess again.\n";
	}
	else if (!strchr(incorectGuesses, guess) || !strchr(displayWord, guess))
	{
		if (strchr(hiddenWord, guess))
		{
			for (int i = 0; i < strlen(hiddenWord); i++)
			{
				if (guess == hiddenWord[i])
				{
					displayWord[i] = hiddenWord[i];
				}
			}
		}
		else
		{
			int n = strlen(incorectGuesses);
			incorectGuesses[n] = guess;
			//incorectGuesses[n + 1] = '/0'; 
			//^^ I don't understand why we need this line..? It adds a 0 after every incorrect guess in the list
		}
	}
}
