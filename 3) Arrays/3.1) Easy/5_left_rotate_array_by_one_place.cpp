#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n)
{
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + n - 1);
    return arr;
}
