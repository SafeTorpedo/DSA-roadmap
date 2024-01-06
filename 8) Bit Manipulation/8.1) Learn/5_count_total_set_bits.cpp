#include <bits/stdc++.h>
using namespace std;

int countSetBits(int N)
{
    int d = 2, ans = 0, x = N;
    while (x)
    {
        ans += ((N + 1) / d) * (d / 2) + max((N + 1) % d - d / 2, 0);

        d *= 2;
        x /= 2;
    }
    return ans;
}