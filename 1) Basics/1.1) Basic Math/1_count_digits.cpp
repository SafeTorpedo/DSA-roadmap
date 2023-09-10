#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int ans = 0, temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit != 0 && n % digit == 0)
            ans++;

        temp /= 10;
    }
    return ans;
}