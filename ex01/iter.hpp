#ifndef ITER_H
#define  ITER_H

#include <iostream>

template <typename T>
void iter(T &arr, int len, void (*f)(T &elem)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif