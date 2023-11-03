#include <bits/stdc++.h>
using namespace std;

// Function to count substrings with at most k distinct characters
int helper(string &str, int k)
{
    if (str.size() == 0)
        return 0;

    unordered_map<char, int> mp;
    int ans = 0, left = 0;

    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;

        while (mp.size() > k)
        {
            mp[str[left]]--;
            if (mp[str[left]] == 0)
                mp.erase(str[left]);

            left++;
        }

        ans += i - left + 1;
    }

    return ans;
}

int countSubStrings(string str, int k)
{
    return helper(str, k) - helper(str, k - 1);
}
