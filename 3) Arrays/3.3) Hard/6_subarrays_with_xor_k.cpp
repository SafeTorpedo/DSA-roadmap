#include <bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector<int> a, int b)
{
    unordered_map<int, int> mp;
    mp.insert({0, 1});

    int xr = 0, ans = 0;
    for (int i : a)
    {
        xr = xr ^ i;
        int req = xr ^ b;
        if (mp.find(req) != mp.end())
            ans += mp[req];

        mp[xr]++;
    }
    return ans;
}