#include <iostream>
int* createStackArray()
{
	int myArr[5];
	myArr[0] = 0;
	myArr[1] = 1;
	myArr[2] = 2;
	myArr[3] = 3;
	myArr[4] = 4;

	return myArr;
}

int* createHeapArray(int size)
{
	// allocate the array
	int* myArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		myArr[i] = i;
	}

	return myArr;

	// deallocate the array
	delete[] myArr;

}
int main()
{
	int* stackArr = createStackArray();
	int* heapArr = createHeapArray(5);

	printf("Stack array: %d\n", stackArr);
	printf("Heap array: %d", heapArr);

	std::cin.get();
	return 0;
}