#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reversePairs(vector<int> &nums)
    {
        int n = nums.size();
        mergeSort(0, n - 1, nums);
        return ans;
    }

private:
    int ans = 0;
    void mergeSort(int left, int right, vector<int> &nums)
    {
        if (left == right)
            return;

        int mid = (left + right) / 2;
        mergeSort(left, mid, nums);
        mergeSort(mid + 1, right, nums);
        merge(left, mid, right, nums);
    }

    void merge(int left, int mid, int right, vector<int> &nums)
    {
        int j = mid + 1;
        for (int i = left; i <= mid; i++)
        {
            while (j <= right && nums[i] > 2 * (long long)nums[j])
                j++;

            ans += j - (mid + 1);
        }

        vector<int> temp;
        int i1 = left, i2 = mid + 1;
        while (i1 <= mid && i2 <= right)
        {
            if (nums[i1] <= nums[i2])
                temp.push_back(nums[i1++]);
            else
                temp.push_back(nums[i2++]);
        }

        while (i1 <= mid)
            temp.push_back(nums[i1++]);

        while (i2 <= right)
            temp.push_back(nums[i2++]);

        for (int i = left; i <= right; i++)
            nums[i] = temp[i - left];
    }
};