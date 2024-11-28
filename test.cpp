#include "pch.h"
#include "MergeSort.h"
#include <algorithm> // std::is_sorted
#include <iostream>

// Test 1: Sprawd�, czy tablica nie jest zmieniona, je�li jest ju� posortowana rosn�co
TEST(Test1, ArrayNotChangedIfSorted) {
    MergeSort sorter;
    int arr[] = { 1, 2, 3, 4, 5 };  // Ju� posortowana rosn�co
    int size = sizeof(arr) / sizeof(arr[0]);

    // Zr�b kopi� tablicy do por�wnania
    int originalArr[] = { 1, 2, 3, 4, 5 };
    int* originalArrCopy = new int[size];
    std::copy(originalArr, originalArr + size, originalArrCopy);

    // Sortowanie ju� posortowanej tablicy
    sorter.sort(arr, size);

    // Sprawd�, czy tablica pozostaje niezmieniona
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], originalArrCopy[i]);
    }

    delete[] originalArrCopy;  // Zwolnienie pami�ci
}
/
// Test 2: Sprawd�, czy tablica jest poprawnie posortowana po wywo�aniu sort()
TEST(MergeSortTest, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { 5, 4, 3, 2, 1 };  // Niesortowana tablica
    int size = sizeof(arr) / sizeof(arr[0]);

    sorter.sort(arr, size);

    // Sprawd�, czy tablica jest teraz posortowana
    EXPECT_TRUE(std::is_sorted(arr, arr + size));
}
