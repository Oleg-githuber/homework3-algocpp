#include "countSort.h"

// Сортировка подсчётом
void count_sort(int* arr, int size)
{
	int* countArr{ createCountArray(arr, size, START_VALUE, FINISH_VALUE) };
	int countSize{ START_VALUE - FINISH_VALUE };
	int index{};
	for (int i = 0; i < size; ++i)
	{
		while (!countArr[index])
		{
			++index;
		}
		arr[i] = index + START_VALUE;
		--countArr[index];
	}
	delete[] countArr;	// Удаление динамического массива
}

// Создание динамического счётного массива
int* createCountArray(int* arr, int size, int startValue, int finishValue)
{
	const int countSize{ finishValue - startValue + 1 };
	int* countArr{ new int[countSize] };
	initArray(countArr, countSize);
	for (int i{}; i < size; ++i)
	{
		++countArr[arr[i] - startValue];
	}
	return countArr;
}

// Инициализация массива нулями
void initArray(int* arr, int size)
{
	for (int i{}; i < size; ++i)
	{
		arr[i] = 0;
	}
}