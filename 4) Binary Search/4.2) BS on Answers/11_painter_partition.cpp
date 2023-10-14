#include <bits/stdc++.h>
using namespace std;

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

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();

    if (k > n)
        return -1;

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int partitions = helper(boards, mid);

        if (partitions > k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}