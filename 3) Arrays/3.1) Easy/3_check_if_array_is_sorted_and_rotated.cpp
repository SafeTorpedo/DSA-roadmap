#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int ctr = 0, n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
                ctr++;
        }
        if (nums[n - 1] > nums[0])
            ctr++;

        return ctr <= 1;
    }
};