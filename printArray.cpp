#include <iostream>
#include "printArray.h"

void printArray(int* arr, int arrSize)
{
	for (int i{}; i < arrSize; ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}