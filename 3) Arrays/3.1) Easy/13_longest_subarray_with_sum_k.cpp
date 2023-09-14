#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();

    int ans = 0, i = 0, j = 0;
    long long sum = 0;
    while (j < n)
    {
        sum += a[j];
        while (sum > k && i <= j)
        {
            sum -= a[i];
            i++;
        }

        if (sum == k)
            ans = max(ans, j - i + 1);

        j++;
    }
    return ans;
}