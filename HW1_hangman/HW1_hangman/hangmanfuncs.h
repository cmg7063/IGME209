// Corinne Green
// IGME 209.04
// February 3, 2016
// hangmanfuncs.h

#pragma once

// draw correct ASCII art to the console window 
// dependent on the number of incorrect guesses
void showGallows(int numBadGuesses);

// loop getting input until a valid input is given
void processInput(char hiddenWord[], char displayWord[], char incorectGuesses[]);
