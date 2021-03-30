// Copyright 2021 NNTU-CS
#include "alg.h"

int cbinsearch(int *arr, int size, int value) {
  int left = *arr;
  int right = size;
  int mid = 0;
  while(left <= right){
  mid = (left+right)/2;
  if (value < arr[mid])
  right = mid - 1;
  else
  if (value > arr[mid])
  left = mid + 1;
  else
  if (value == arr[mid])
  return value;
  else if (left > right)
  continue;
}
  return 0; // если ничего не найдено
}
