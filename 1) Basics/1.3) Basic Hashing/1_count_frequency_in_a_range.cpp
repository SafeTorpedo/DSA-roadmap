#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> ans(n, 0);

    for (int i : nums)
    {
        if (i <= n)
            ans[i - 1]++;
    }
    return ans;
}