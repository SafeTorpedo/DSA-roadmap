#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    recursiveInsertionSort(arr, n - 1);

    int j = n - 2;
    int curr = arr[n - 1];
    while (j >= 0 && arr[j] > curr)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = curr;
}