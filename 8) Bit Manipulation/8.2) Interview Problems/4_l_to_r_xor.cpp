#include <bits/stdc++.h>
using namespace std;

int xor1toN(int N)
{
    if (N % 4 == 0)
        return N;
    if (N % 4 == 1)
        return 1;
    if (N % 4 == 2)
        return N + 1;
    if (N % 4 == 3)
        return 0;
}

int findXOR(int L, int R)
{

    int x = xor1toN(L - 1);
    int y = xor1toN(R);

    return x ^ y;
}