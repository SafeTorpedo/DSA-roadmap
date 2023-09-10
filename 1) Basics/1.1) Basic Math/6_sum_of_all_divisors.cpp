#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n)
{

    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                ans += j;

                if (j != i / j)
                    ans += i / j;
            }
        }
    }

    return ans;
}