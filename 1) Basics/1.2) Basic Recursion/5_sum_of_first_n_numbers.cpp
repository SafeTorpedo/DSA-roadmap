#include <bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n)
{
    // if (n==1)
    //     return 1;

    // return n+sumFirstN(n-1);

    long long sum = (n * (n + 1)) / 2;
    return sum;
}