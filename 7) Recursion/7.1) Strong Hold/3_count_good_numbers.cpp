#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution
{
public:
    int countGoodNumbers(long long n)
    {
        ll count_4 = n / 2;
        ll count_5 = n - count_4;
        ll ans = ((power(4LL, count_4) % p * power(5LL, count_5) % p) % p);

        return (int)ans;
    }

private:
    int p = 1e9 + 7;

    ll power(ll x, ll y)
    {
        ll ans = 1;

        x %= p;
        if (x == 0)
            return 0;

        while (y > 0)
        {
            if (y & 1)
                ans = (ans * x) % p;

            y >>= 1;
            x = (x * x) % p;
        }

        return ans;
    }
};