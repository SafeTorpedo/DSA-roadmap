#include <bits/stdc++.h>
using namespace std;

string subsequencesHelper(string s, int binary)
{
    string subseq = "";
    int index;
    int n = s.length();

    while (binary > 0)
    {
        index = log2(binary & -binary) + 1;

        string temp;
        temp.push_back(s[n - index]);
        temp.append(subseq);
        subseq = temp;

        binary = (binary & ~(1 << (index - 1)));
    }

    return subseq;
}

vector<string> subsequences(string str)
{
    int n = str.length();
    vector<string> ans;
    int right = pow(2, n) - 1;

    for (int i = 1; i <= right; i++)
    {
        string subseq = subsequencesHelper(str, i);
        ans.push_back(subseq);
    }

    return ans;
}
