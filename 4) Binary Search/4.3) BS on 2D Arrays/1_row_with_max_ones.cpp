#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int maxCount = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        int countOnes = m - lowerBound(matrix[i], m, 1);
        if (countOnes > maxCount)
        {
            maxCount = countOnes;
            ans = i;
        }
    }

    return ans;
}