#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
    int ans = arr[0];
    for (int i : arr)
        ans = max(ans, i);

    return ans;
}