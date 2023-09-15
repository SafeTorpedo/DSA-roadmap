#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
    vector<int> ans;
    int n = a.size(), currentMax = a[n - 1];
    ans.push_back(a[n - 1]);

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > currentMax)
        {
            ans.push_back(a[i]);
            currentMax = a[i];
        }
    }

    return ans;
}