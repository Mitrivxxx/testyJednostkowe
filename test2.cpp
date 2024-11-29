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
//Poprawnie sortuje losow¹ tablicê liczb
TEST(czy_poprawnie_sortuje_losowa_tablice, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { 4, 5, 1, 2, 3 };
    int orginalArray[] = { 1,2,3,4,5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}
//poprawnie sortuje tablice tylko z liczbami ujemnymi,
TEST(czy_poprawnie_sortuje_z_liczbami_ujemnymi, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { -1, -3, -2, -5, -4 };
    int orginalArray[] = { -5,-4,-3,-2,-1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);
    sorter.showArray(arr, size);
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}
//poprawnie sortuje tablice z liczbami ujemnymi i liczbami dodatnimi
TEST(czy_poprawnie_sortuje_z_liczbami_ujemnymi_i_dodatnimi, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[] = { -1, 3, 2, -5, -4 };
    int orginalArray[] = { -5,-4,-1, 2, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}