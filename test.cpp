#include "pch.h"
#include "MergeSort.h"
#include <iostream>

// Test 1: Sprawdz, czy tablica nie jest zmieniona, jesli jest ju¿ posortowana rosn¹co
TEST(czy_zmieniona, ArrayNotChangedIfSorted) {
    MergeSort sorter;
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int originalArr[] = { 1, 2, 3, 4, 5 };
    int* originalArrCopy = new int[size];
    std::copy(originalArr, originalArr + size, originalArrCopy);

    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], originalArrCopy[i]);
    }
    delete[] originalArrCopy;
}

// Test 2: SprawdŸ, czy tablica jest poprawnie posortowana po wywo³aniu sort()
TEST(czy_poprawnie_posortowana, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { 4, 5, 3, 2, 1 };
    int orginalArray[] = { 1,2,3,4,5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}
