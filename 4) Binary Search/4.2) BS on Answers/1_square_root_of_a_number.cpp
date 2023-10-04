#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    int low = 1, high = n;
    long long ans = 0;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = mid * mid;

        if (val <= (long long)n)
        {
            ans = max(ans, mid);
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    return (int)ans;
}