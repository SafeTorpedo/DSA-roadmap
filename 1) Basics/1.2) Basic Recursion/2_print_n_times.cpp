#include <bits/stdc++.h>
using namespace std;

void helper(vector<string> &ans, int n)
{
    if (n == 0)
        return;

    ans.push_back("Coding Ninjas");
    helper(ans, n - 1);
}

vector<string> printNTimes(int n)
{
    vector<string> ans;
    helper(ans, n);
    return ans;
}