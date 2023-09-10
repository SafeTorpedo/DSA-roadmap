#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &nums, int left, int right)
{
    if (left < right)
    {
        swap(nums[left], nums[right]);
        helper(nums, left + 1, right - 1);
    }
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    helper(nums, 0, n - 1);
    return nums;
}
