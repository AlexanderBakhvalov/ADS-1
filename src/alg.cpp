// Copyright 2021 NNTU-CS
#include "alg.h"

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
      int left = 0, 
    int right = size - 1,
    int a = 0;
    while (left < right) {
        int m = (left + right) / 2;
        if (arr[m] < value)
            left = m + 1;
        else
            right = m;
    }

    if (arr[left] == value) {
        while (arr[left] == value) {
            a++;
            left++;
        }
    }

    if (a)
        return a;
    else
  return 0; // если ничего не найдено
}
