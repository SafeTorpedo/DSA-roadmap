#include <bits/stdc++.h>
using namespace std;

int helper(string s, int n)
{
    int count = 1;

    unordered_map<char, int> m1;

    for (int i = 0; i < n; i++)
    {
        if (m1[s[i]] == 0)
        {
            m1[s[i]] = count;
            count *= 2;
        }
        else
        {
            int temp = m1[s[i]];
            m1[s[i]] = count;
            count *= 2;
            count -= temp;
        }
    }
    return count;
}

string moreSubsequence(int n, int m, string a, string b)
{
    if (helper(a, n) >= helper(b, m))
        return a;
    else
        return b;
}