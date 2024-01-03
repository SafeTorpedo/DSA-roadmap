#include <bits/stdc++.h>
using namespace std;

bool isKthBitSet(int n, int k)
{
    if (n & (1 << (k - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}