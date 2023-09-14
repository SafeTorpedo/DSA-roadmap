#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int m = a.size(), n = b.size();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || ans.back() != a[i])
                ans.push_back(a[i]);

            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
                ans.push_back(b[j]);

            j++;
        }
    }

    while (i < m)
    {
        if (ans.back() != a[i])
            ans.push_back(a[i]);

        i++;
    }

    while (j < n)
    {
        if (ans.back() != b[j])
            ans.push_back(b[j]);

        j++;
    }

    return ans;
}