#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int temp = n, digits = floor(log10(n) + 1), sum = 0;
    while (temp > 0)
    {
        int x = temp % 10;
        sum += pow(x, digits);
        temp /= 10;
    }

    if (sum == n)
        return true;

    return false;
}
