#include "pch.h"
#include "MergeSort.h"
#include <iostream>
#include <string>

//dev

using namespace std;

int main()
{
        int arr[] = { 13, 4, 17, 9, 0, 12, 19, 8, 6, 18, 7, 3, 14, 1, 15, 10, 11, 2, 5, 20, 16};
        int size = sizeof(arr) / sizeof(arr[0]);

        MergeSort ms;
        ms.sort(arr, size);
        ms.showArray(arr, size);

    return 0;
}
