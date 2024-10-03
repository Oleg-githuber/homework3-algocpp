#pragma once

// Сортировка подсчётом

#define START_VALUE 10

#define FINISH_VALUE 24

void count_sort(int* arr, int size);
int* createCountArray(int* arr, int size, int startValue, int finishValue);
void initArray(int* arr, int size);