#include <iostream>
#include "main.h"

int getLengthArray(int myArray[])
{
	for (int i = 0; i < 10; i++)
	{
		if (myArray[i] == -1)
		{
			return i;
		}
	}
}

int getLengthPointer(int* myInt)
{
	int* i;
	for (i = myInt; *i < 10; i++)
	{
		if (myInt[*i] == -1)
		{
			return *i;
		}
	}
}

int main()
{
	int myArray[] = { 1, 2, 3, 4, 5, 6, 7, -1 };
	int* myArrayPtr = myArray;

	printf("getLengthArray(myArrayPtr): %d\n\n", getLengthArray(myArrayPtr));
	printf("getLengthPointer(myArray): %d\n\n", getLengthPointer(myArray));

	std::cin.get();
	return 0;
}
