#include "pch.h"
#include "MergeSort.h"
#include <cstdlib>
#include <ctime> 
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
//obs³uguje pust¹ tablicê bez rzucania wyj¹tkiem,
TEST(czy_pusta_tablica, ArraySortedCorrectly) {
    MergeSort sorter;
    int arr[4];
    int orginalArray[4];
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}
//tblica jednoelementowa pozostaje niezmieniona
TEST(MergeSortTest, tab_jeden_ele) {
    MergeSort sorter;
    int arr[] = {3};
    int orginalArray[] = { 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}
//dodatnie ujemne duplikanty------------
TEST(MergeSortTest, dodatnie_ujemne_duplikanty) {
    MergeSort sorter;
    int arr[] = { -3, -1, -3, -2, -1, -2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    sorter.sort(arr, size);

    EXPECT_TRUE(std::is_sorted(arr, arr + size));
}
//dwa elementy rosnace
TEST(MergeSortTest, dwa_rosnace) {
    MergeSort sorter;
    int arr[] = { 3, 2 };
    int orginalArray[] = { 2, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter.sort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], orginalArray[i]);
    }
}
//tablica z ponad 100 ele
TEST(MergeSortTests, duzat_ablica) {
    MergeSort sorter;
    const int size = 121;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 100;
    }

    sorter.sort(arr, size);

    EXPECT_TRUE(std::is_sorted(arr, arr + size));
}
TEST(MergeSortTests, duzat_ablica_z_ujemnymi) {
    MergeSort sorter;
    const int size = 121;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 201 - 100;
    }

    sorter.sort(arr, size);

    EXPECT_TRUE(std::is_sorted(arr, arr + size));
}

