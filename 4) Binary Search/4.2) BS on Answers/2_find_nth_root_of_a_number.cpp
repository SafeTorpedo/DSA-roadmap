#include <bits/stdc++.h>
using namespace std;

int helper(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= mid;
        if (ans > m)
            return 2;
    }

    if (ans == m)
        return 1;

    return 0;
}

int NthRoot(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int flag = helper(mid, n, m);
        if (flag == 1)
            return mid;
        else if (flag == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}