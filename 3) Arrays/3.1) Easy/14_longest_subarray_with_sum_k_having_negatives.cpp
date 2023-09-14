#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();

    unordered_map<int, int> prefixSum;
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if (sum == k)
            ans = max(ans, i + 1);

        int rem = sum - k;
        if (prefixSum.find(rem) != prefixSum.end())
            ans = max(ans, i - prefixSum[rem]);

        if (prefixSum.find(sum) == prefixSum.end())
            prefixSum[sum] = i;
    }
    return ans;
}