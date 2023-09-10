#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &ans, int start, int x)
{
    if (start > x)
        return;

    ans.push_back(start);
    helper(ans, start + 1, x);
}

vector<int> printNos(int x)
{
    vector<int> ans;
    helper(ans, 1, x);
    return ans;
}