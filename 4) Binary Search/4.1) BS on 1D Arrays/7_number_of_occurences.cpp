#include <bits/stdc++.h>
using namespace std;

int count(vector<int> &nums, int n, int target)
{
    int startPos = -1, endPos = -1;
    int low = 0, high = n - 1;

    // First Position
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            startPos = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // Last Position
    low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            endPos = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (startPos == -1)
        return 0;

    return endPos - startPos + 1;
}
