#include <bits/stdc++.h>
using namespace std;

void swapNumber(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}