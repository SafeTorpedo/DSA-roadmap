#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &ans, int x)
{
    if (x == 0)
        return;

    ans.push_back(x);
    helper(ans, x - 1);
}

vector<int> printNos(int x)
{
    vector<int> ans;
    helper(ans, x);
    return ans;
}