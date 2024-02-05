#include <bits/stdc++.h>
using namespace std;

vector<int> countGreater(vector<int> &arr, vector<int> &query)
{
    int n = arr.size(), q = query.size();

    vector<int> ans(q, 0);

    for (int i = 0; i < q; i++)
    {
        int queryIndex = query[i];

        for (int j = queryIndex + 1; j < n; j++)
        {
            if (arr[j] > arr[queryIndex])
            {
                ans[i]++;
            }
        }
    }

    return ans;
}