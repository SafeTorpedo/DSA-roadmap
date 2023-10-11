#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int> &stalls, int cows, int distance)
{
    int n = stalls.size();
    int ctr = 1;
    int prev = stalls[0];

    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - prev >= distance)
        {
            ctr++;
            prev = stalls[i];
        }

        if (ctr >= cows)
            return true;
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());

    int low = 1, high = stalls[n - 1] - stalls[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (helper(stalls, k, mid))
            low = mid + 1;
        else
            high = mid - 1;
    }

    return high;
}