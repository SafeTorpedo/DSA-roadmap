#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subarraysWithSumK(vector<int> a, long long k)
{
    int n = a.size();

    vector<vector<int>> ans;

    int start = 0, end = -1;
    long long currentSum = 0;

    while (start < n)
    {
        while ((end + 1 < n) && (currentSum + a[end + 1] <= k))
        {
            currentSum += a[end + 1];
            ++end;
        }

        if (currentSum == k)
        {
            vector<int> temp;

            for (int i = start; i <= end; ++i)
            {
                temp.push_back(a[i]);
            }
            ans.push_back(temp);
        }

        currentSum -= a[start];
        ++start;
    }

    return ans;
}