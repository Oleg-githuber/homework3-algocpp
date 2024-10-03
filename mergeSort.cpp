#include "mergeSort.h"

// Создание динамического массива
int* mergeArrays(int* leftArray, int leftSize, int* rightArray, int rightSize)
{
	const int arrSize{ leftSize + rightSize };
	int* arr{new int[arrSize]};
	int leftIndex{};
	int rightIndex{};
	int arrIndex{};
	while (leftIndex < leftSize || rightIndex < rightSize)
	{
		if (leftIndex == leftSize)
		{
			arr[arrIndex++] = rightArray[rightIndex++];
		}
		else if (rightIndex == rightSize)
		{
			arr[arrIndex++] = leftArray[leftIndex++];
		}
		else if(leftArray[leftIndex] <= rightArray[rightIndex])
		{
			arr[arrIndex++] = leftArray[leftIndex++];
		}
		else
		{
			arr[arrIndex++] = rightArray[rightIndex++];
		}
			
	}
	return arr;
}

// Сортировка слиянием
void merge_sort(int* arr, int size)
{
	if (size == 1)
	{
		return;
	}

	int* leftArr = arr;
	int* rightArr = &(arr[size / 2]);
	int leftSize = size / 2;
	int rightSize = size - leftSize;
	merge_sort(leftArr, leftSize);
	merge_sort(rightArr, rightSize);

	int* sortedArray{ mergeArrays(leftArr, leftSize, rightArr, rightSize) };

	for (int i{}; i < size; ++i)
	{
		arr[i] = sortedArray[i];
	}
	delete[] sortedArray;	// Удаление динамического массива
	
}