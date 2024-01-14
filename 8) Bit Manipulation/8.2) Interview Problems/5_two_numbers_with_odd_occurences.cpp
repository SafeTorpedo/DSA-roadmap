#include <bits/stdc++.h>
using namespace std;

vector<int> twoOddNum(vector<int> arr)
{
    int xorResult = 0;
    int n = arr.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
        xorResult = xorResult ^ arr[i];

    int k = xorResult & (~(xorResult - 1));

    int group1XOR = 0;
    int group2XOR = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & k)
            group1XOR = group1XOR ^ arr[i];
        else
            group2XOR = group2XOR ^ arr[i];
    }

    int odd1 = group1XOR;
    int odd2 = group2XOR;
    if (odd1 < odd2)
    {
        ans.push_back(odd2);
        ans.push_back(odd1);
    }
    else
    {
        ans.push_back(odd1);
        ans.push_back(odd2);
    }

    return ans;
}