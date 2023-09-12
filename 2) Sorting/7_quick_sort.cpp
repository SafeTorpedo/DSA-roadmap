#include <bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end)
{
    int pivot = input[start];
    int i = start, j = end;

    while (i < j)
    {
        while (input[i] <= pivot && i <= end - 1)
            i++;

        while (input[j] > pivot && j >= start + 1)
            j--;

        if (i < j)
            swap(input[i], input[j]);
    }
    swap(input[start], input[j]);
    return j;
}

void quickSort(int input[], int start, int end)
{
    if (start < end)
    {
        int pivot = partitionArray(input, start, end);
        quickSort(input, start, pivot - 1);
        quickSort(input, pivot + 1, end);
    }
}