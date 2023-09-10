#include <bits/stdc++.h>
using namespace std;

void helper(vector<long long> &ans, long long fact, int i, long long n)
{
    if (fact > n)
        return;

    ans.push_back(fact);
    i++;
    helper(ans, fact * i, i, n);
}

vector<long long> factorialNumbers(long long n)
{
    vector<long long> ans;
    helper(ans, 1, 1, n);
    return ans;
}