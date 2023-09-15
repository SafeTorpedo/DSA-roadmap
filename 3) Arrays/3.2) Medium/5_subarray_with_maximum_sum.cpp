#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSubarray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        int sum = INT_MIN, current = 0;
        int temp = 0, start = -1, end = -1;
        for (int i = 0; i < n; i++)
        {
            current += nums[i];
            if (current > sum)
            {
                sum = current;
                start = temp;
                end = i;
            }
            if (current < 0)
            {
                current = 0;
                temp = i + 1;
            }
        }

        for (int i = start; i <= end; i++)
            ans.push_back(nums[i]);

        return ans;
    }
};