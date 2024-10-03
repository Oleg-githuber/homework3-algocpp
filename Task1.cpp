

#include "Task1.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    //int arr[]{ 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };    // Массив для всех видов сортировки, кроме сортировки подсчётом
    int arr[]{19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17};  // Массив для сортировка подсчётом
    int arrSize{ sizeof(arr) / sizeof(arr[0]) };
    std::cout << "Массив до сортировки:\n";
    printArray(arr, arrSize);

    //merge_sort(arr, arrSize);     // Сортировка слиянием
    //quick_sort(arr, arrSize);     // Быстрая сортировка
    count_sort(arr, arrSize);       // Сортировка подсчётом

    std::cout << "Массив после сортировки:\n";
    printArray(arr, arrSize);
}
