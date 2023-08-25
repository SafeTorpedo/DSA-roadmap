#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int divisor = pow(10, to_string(x).size() - 1);
        int left, right;

        while (x)
        {
            left = x / divisor;
            right = x % 10;
            if (left != right)
                return false;

            x = (x % divisor) / 10;
            divisor /= 100;
        }
        return true;
    }
};