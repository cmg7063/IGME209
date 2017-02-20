#include "wk3funcs.h"
#include <iostream>

void printPtr(void * ptr)
{
	printf("address: %p\n\n", ptr);
}

void passByVal(int myInt)
{
	myInt = 10;
}

void passByRef(int & myInt)
{
	myInt = 100;
}

void passByPtr(int * myIntPtr)
{
	*myIntPtr = 1000;
}

int stringCharInt(char word[], char letter)
{
	for (int i = 0; i < word[i] != '\0'; i++)
	{
		if (word[i] == letter)
		{
			return i;
		}
	}
	return -1;
}

char * stringCharPtr(char * word, char letter)
{
	for (char* i = word; *word != '\0'; i++)
	{
		if (*word == letter)
		{
			return word;
		}
	}
	return nullptr;
}

void demoMemory()
{
	// allocate int on stack
	// give it a value of 1
	// deallocate int on stack
	{ // creating a local scope
		int myInt; // allocate
		myInt = 1; // give value reading/writing
	} // deallocates out of scope

	// allocate int array on stack
	// give them values of 2
	// deallocate int array on stack
	{
		int myArr[4] = { 2, 2, 2, 2 };
	} // deallocates out of scope

	// allocate int on heap
	// give it a value of 3
	// deallocate int on heap
	{
		int* myIntPtr = new int;	// allocate and get address
		*myIntPtr = 3;				// dereference pointer to read/write
		delete myIntPtr;			// deallocates when done with variable
	}

	// allocate int array on heap
	// give them values of 4
	// deallocate int array on heap
	{
		int* myIntArrHeap = new int[4];
		myIntArrHeap[0] = 4;
		myIntArrHeap[1] = 4;
		// or 
		*(myIntArrHeap + 2) = 4;
		*(myIntArrHeap + 3) = 4; // deref with ptr style code

		delete[] myIntArrHeap; // delete a contiguous block of memory (array)

		// sometimes, but not now:
		//for (int i = 0; i < 4; i++)
		//{
		//	delete myIntArrHeap[i]; // if the array contains pointers to things
									// on the heap (for ex: RPS hw next week)
		//}
	}

	// can I access any vars here?
	// no
}
