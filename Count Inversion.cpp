#include <bits/stdc++.h>
long long merge(long long *arr, int s, int mid, int e)
{
    long long inv = 0;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
            // MOST IMPORTANT CHANGE
            inv += len1 - index1;
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

    return inv;
}

long long mergeSort(long long *arr, int s, int e)
{

    long long inv = 0;

    if (s < e)
    {
        int mid = (s + e) / 2;

        // left part ke inversions
        inv += mergeSort(arr, s, mid);

        // right part ke inversions
        inv += mergeSort(arr, mid + 1, e);

        // merge karte wakt hue inversions
        inv += merge(arr, s, mid, e);
    }

    return inv;
}

long long getInversions(long long *arr, int n){


    return mergeSort(arr,0,n-1);

}
