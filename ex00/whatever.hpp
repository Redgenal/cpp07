#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T = int>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T = int>
T const &max(T const &a, T const &b) {
    if (a > b)
        return a;
    else
        return b;
}

template <typename T = int>
T const &min(T const &a, T const &b) {
    if (a < b)
        return a;
    else
        return b;
}

#endif