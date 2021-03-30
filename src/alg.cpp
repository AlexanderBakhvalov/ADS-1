// Copyright 2021 NNTU-CS
#include "alg.h"

    int left = 0, 
    int right = size - 1,
    int с = 0;
    while (left < right) {
        int m = (left + right) / 2;
        if (arr[m] < value)
            left = m + 1;
        else
            right = m;
    }

    if (arr[left] == value) {
        while (arr[left] == value) {
            с++;
            left++;
        }
    }

    if (с)
        return с;
    else
        return 0;
}
