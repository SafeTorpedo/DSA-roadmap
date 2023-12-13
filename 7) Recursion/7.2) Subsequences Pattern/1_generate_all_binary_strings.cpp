#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans, int n, string current)
{
    if (current.length() == n)
    {
        ans.push_back(current);
        return;
    }

    solve(ans, n, current + "0");
    solve(ans, n, current + "1");
}

vector<string> generateString(int n)
{
    vector<string> ans;

    solve(ans, n, "");

    return ans;
}