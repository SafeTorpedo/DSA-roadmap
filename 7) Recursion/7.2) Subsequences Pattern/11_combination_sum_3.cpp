#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> cur;
        helper(cur, 1, k, n, ans);

        return ans;
    }

private:
    void helper(vector<int> &cur, int num, int k, int n, vector<vector<int>> &ans)
    {
        if (n < 0 || cur.size() > k)
            return;

        if (n == 0 && cur.size() == k)
        {
            ans.push_back(cur);
            return;
        }

        for (int i = num; i <= 9; i++)
        {
            cur.push_back(i);
            helper(cur, i + 1, k, n - i, ans);
            cur.pop_back();
        }
    }
};