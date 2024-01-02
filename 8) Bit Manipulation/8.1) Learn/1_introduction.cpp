#include <bits/stdc++.h>
using namespace std;

vector<int> bitManipulation(int num, int i)
{
    vector<int> ans;

    int get = 0, set = 0, clear = 0;

    int mask = (1 << (i - 1));

    if (num & mask)
        get = 1;

    set = (num | mask);

    clear = (num & (~mask));

    ans.push_back(get);
    ans.push_back(set);
    ans.push_back(clear);

    return ans;
}
