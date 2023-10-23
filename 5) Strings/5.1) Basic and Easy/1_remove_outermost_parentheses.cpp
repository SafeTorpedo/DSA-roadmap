#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans;
        int count = 0;

        for (char current : s)
        {
            if (current == '(' && count == 0)
                count++;
            else if (current == '(' && count >= 1)
            {
                ans += current;
                count++;
            }
            else if (current == ')' && count > 1)
            {
                ans += current;
                count--;
            }
            else if (current == ')' && count == 1)
                count--;
        }

        return ans;
    }
};