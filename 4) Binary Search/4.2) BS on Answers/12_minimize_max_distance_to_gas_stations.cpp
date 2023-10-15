#include <bits/stdc++.h>
using namespace std;

int helper(long double distance, vector<int> &arr, int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int stationsInBetween = (arr[i] - arr[i - 1]) / distance;

        if (arr[i] - arr[i - 1] == distance * stationsInBetween)
            stationsInBetween--;

        count += stationsInBetween;
    }

    return count;
}

long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();
    long double low = 0;
    long double high = 0;

    for (int i = 0; i < n - 1; i++)
        high = max(high, (long double)(arr[i + 1] - arr[i]));

    long double difference = 1e-6;
    while (high - low > difference)
    {
        long double mid = (low + high) / (2.0);

        int count = helper(mid, arr, n);

        if (count > k)
            low = mid;
        else
            high = mid;
    }

    return high;
}
