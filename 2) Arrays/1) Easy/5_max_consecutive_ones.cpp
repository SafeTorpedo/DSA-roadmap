#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ctr = 0, ans = 0;
        for (int i : nums)
        {
            if (i == 1)
            {
                ctr++;
                ans = max(ans, ctr);
            }
            else
                ctr = 0;
        }
        return ans;
    }
};