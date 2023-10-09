#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = INT_MAX;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int numDays = helper(weights, mid);

            if (numDays <= days)
            {
                high = mid - 1;
                ans = min(ans, mid);
            }
            else
                low = mid + 1;
        }

        return ans;
    }

private:
    int helper(vector<int> &weights, int capacity)
    {
        int days = 1;
        int n = weights.size();
        int total = 0;

        for (int weight : weights)
        {
            if (total + weight > capacity)
            {
                days++;
                total = weight;
            }
            else
                total += weight;
        }

        return days;
    }
};