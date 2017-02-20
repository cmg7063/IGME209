#include "wk3funcs.h"
#include <iostream>

int main()
{
	// memory
	// every variable has some address in memory
	// 0 1 2 3 4 5 6 7 8 9 ...
	// _ _ _ _ _ _ _ _ _ _ _ _ _ _
	//   C ? ? |--I--| ? ? |--F--|
	//  (char)  (int)      (float)

	// pointers:
	// store the address of data, we can assume its a type of data
	// (sometimes there's no type: void pointer)
	// (only difference - can't dereference
	// (deref. = find out what's at the address)

	/* int */
	int myInt;
	printf("sizeof(myInt): %d\n", sizeof(myInt));
	
	// declare with asterisk: pointer variable
	//		(if you dereference the pointer, you get an int)
	//int* myIntPtr;

	// pointers should always be initialized to 
	// nullptr (value 0)
	//		if a func takes a pointer, it can check if nullptr was passed
	//			example: print data at address...
	// or reference to another variable
	//int* myIntPtr = nullptr;
	int* myIntPtr = &myInt;
	printf("sizeof(myIntPtr): %d\n", sizeof(myIntPtr));
	printf("myIntPtr: %p\n\n", myIntPtr); //%p prints pointers

	// to get original variable out of pointer, dereference it.
	*myIntPtr = 10;
	printf("myInt: %d\n\n", myInt);

	MyStruct aStruct;
	printf("sizeof(aStruct): %d\n", sizeof(aStruct));
	MyStruct* aStructPtr = &aStruct;
	printf("aStructPtr: %d\n\n", sizeof(aStructPtr));

	// ex 1:
	printPtr(aStructPtr);
	printPtr(myIntPtr);
	printPtr(nullptr);

	// ex 2:
	int myInt2 = 1;
	printf("myInt2: %d\n", myInt2);

	passByVal(myInt2); // print 1? or 10?
	printf("myInt2: %d\n", myInt2);

	passByRef(myInt2); // print 1? or 10 or 100?
	printf("myInt2: %d\n", myInt2);

	passByPtr(&myInt2); // print 1? or 10 or 1000?
	printf("myInt2: %d\n", myInt2); 

	std::cin.get();
	return 0;
}