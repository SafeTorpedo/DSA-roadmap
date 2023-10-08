#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();

        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = INT_MAX;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (helper(nums, mid) <= threshold)
            {
                ans = min(ans, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return ans;
    }

private:
    int helper(vector<int> &nums, int divisor)
    {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++)
            sum += ceil((double)(nums[i]) / (double)(divisor));

        return sum;
    }
};