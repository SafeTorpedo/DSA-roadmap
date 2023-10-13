#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int splitArray(vector<int> &nums, int k)
    {
        int n = nums.size();

        if (k > n)
            return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int partitions = helper(nums, mid);

            if (partitions > k)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }

private:
    int helper(vector<int> &nums, int allowedSum)
    {
        int partitions = 1;
        long long sum = 0;

        for (int number : nums)
        {
            if (sum + number <= allowedSum)
                sum += number;
            else
            {
                partitions++;
                sum = number;
            }
        }

        return partitions;
    }
};