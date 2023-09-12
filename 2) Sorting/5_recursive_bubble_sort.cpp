#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    bool flag = false;
    for (int i = 0; i <= n - 2; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            flag = true;
        }
    }

    if (!flag)
        return;

    recursiveBubbleSort(arr, n - 1);
}