#include "pch.h"
#include "MergeSort.h"
//Potrafi posortowaæ tablicê, która jest posortowana w odwrotnej kolejnoœci

TEST(czy_poprawana_w_poprawnej_kolejnosci, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { 5, 4, 3, 2, 1 };
    int orginalArray[] = { 1,2,3,4,5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}