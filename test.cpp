#include "pch.h"
#include "MergeSort.h"
#include <algorithm> // std::is_sorted
#include <iostream>

// Test 1: SprawdŸ, czy tablica nie jest zmieniona, jeœli jest ju¿ posortowana rosn¹co
TEST(Test1, ArrayNotChangedIfSorted) {
    MergeSort sorter;
    int arr[] = { 1, 2, 3, 4, 5 };  // Ju¿ posortowana rosn¹co
    int size = sizeof(arr) / sizeof(arr[0]);

    // Zrób kopiê tablicy do porównania
    int originalArr[] = { 1, 2, 3, 4, 5 };
    int* originalArrCopy = new int[size];
    std::copy(originalArr, originalArr + size, originalArrCopy);

    // Sortowanie ju¿ posortowanej tablicy
    sorter.sort(arr, size);

    // SprawdŸ, czy tablica pozostaje niezmieniona
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], originalArrCopy[i]);
    }

    delete[] originalArrCopy;  // Zwolnienie pamiêci
}
/
// Test 2: SprawdŸ, czy tablica jest poprawnie posortowana po wywo³aniu sort()
TEST(MergeSortTest, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { 5, 4, 3, 2, 1 };  // Niesortowana tablica
    int size = sizeof(arr) / sizeof(arr[0]);

    sorter.sort(arr, size);

    // SprawdŸ, czy tablica jest teraz posortowana
    EXPECT_TRUE(std::is_sorted(arr, arr + size));
}
