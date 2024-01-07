#include <bits/stdc++.h>
using namespace std;

int setBits(int N)
{
    if ((N & (N + 1)) == 0)
        return N;

    return N | (N + 1);
}
