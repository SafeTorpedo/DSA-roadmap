#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &arr, int pages)
{
    int students = 1;
    long long sum = 0;

    for (int i : arr)
    {
        if (sum + i <= pages)
            sum += i;
        else
        {
            students++;
            sum = i;
        }
    }
    return students;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int students = helper(arr, mid);

        if (students > m)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}