#include <bits/stdc++.h>
using namespace std;

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, true));

    for (int i = 1; i <= k; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j < a[i - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
        }
    }

    return dp[n][k];
}