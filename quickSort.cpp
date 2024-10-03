#include "quickSort.h"

// Быстрая сортировка
void quick_sort(int* arr, int size)
{
	if (size == 1)
	{
		return;
	}
	//int pivotIndex{ size / 2 };
	//int pivot{ arr[pivotIndex] };
	int leftIndex{ 0 };
	int rightIndex{ size - 1 };
	quickSort(arr, leftIndex, rightIndex);
}

// Рекурсивная функция
void quickSort(int* arr, int leftBorder, int rightBorder)
{
	if (!(rightBorder - leftBorder))
	{
		return;
	}
	//int pivotIndex{ size / 2 };
	//int pivot{ arr[pivotIndex] };
	int leftIndex{ leftBorder };
	int rightIndex{ rightBorder };
	int border{ pivoting(arr, leftIndex, rightIndex) };
	quickSort(arr, leftIndex, border);
	quickSort(arr, border + 1, rightIndex);
}

// Обмен местами элементов массива
void swapElements(int* arr, int index1, int index2)
{
	int temp{ arr[index1] };
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

// Пивотинг
int pivoting(int* arr, int leftborder, int rightborder)
{
	
	int leftIndex{ leftborder };
	int rightIndex{ rightborder };
	int pivotIndex{ (leftborder + rightborder) / 2 };
	while (true)
	{
		while (arr[leftIndex] < arr[pivotIndex] && leftIndex < pivotIndex)
		{
			++leftIndex;
		}
		while (arr[rightIndex] > arr[pivotIndex] && rightIndex > pivotIndex)
		{
			--rightIndex;
		}
		if (leftIndex >= rightIndex)
		{
			return leftIndex;
		}
		swapElements(arr, leftIndex, rightIndex);
		
	}
}