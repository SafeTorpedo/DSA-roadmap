#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int len = s.size();

        if (len == 0)
            return 0;

        int index = 0;
        while (index < len && s[index] == ' ')
            index++;

        if (index == len)
            return 0;

        bool isNegative = (s[index] == '-');
        if (isNegative || s[index] == '+')
            index++;

        int maxLimit = INT_MAX / 10;
        int ans = 0;

        while (index < len && isDigit(s[index]))
        {

            int digit = s[index] - '0';

            if (ans > maxLimit || (ans == maxLimit && digit > 7))
                return isNegative ? INT_MIN : INT_MAX;

            ans = (ans * 10) + digit;
            index++;
        }

        return isNegative ? -ans : ans;
    }

private:
    bool isDigit(char ch)
    {
        return ch >= '0' && ch <= '9';
    }
};