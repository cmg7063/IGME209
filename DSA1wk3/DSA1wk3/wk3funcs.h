#pragma once

struct MyStruct
{
	int someInt;
	float someFloat;
	char someChar;
};

// ex 1: print address
void printPtr(void* ptr);

// ex 2: set by ... val, ref, pointer
void passByVal(int myInt);		// creates a local copy
void passByRef(int& myInt);		// operates on original copy
void passByPtr(int* myIntPtr);		// copies the address 
								// this is how passing arrays works!

// naive strchr (search a string for a char, return pointer)
// 1st, return an index
int stringCharInt(char word[], char letter);

char* stringCharPtr(char* word, char letter);

// Notes on Memory Allocation:
// The memory stack
	// needs to knwo size of variables at complete time
	// is implemented with stack data struct
	// does not allow fragments in memory
	// allocates quickly
	// deallocates things going out of scope

// Heap memory =/= heap data struct
// C++			new delete
// stack		int myInt			
//							C++							C
// heap			{ int* myIntPtr new int;		// malloc(sizeof(int)),
				// delete myIntPtr,	}		// free(myIntPtr)