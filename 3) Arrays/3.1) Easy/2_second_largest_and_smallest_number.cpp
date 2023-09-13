#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;
    for (int i : a)
    {
        // small element
        if (i < small)
        {
            secondSmall = small;
            small = i;
        }
        else if (i < secondSmall && i != small)
            secondSmall = i;


        // large element
        if (i > large)
        {
            secondLarge = large;
            large = i;
        }
        else if (i > secondLarge && i != large)
            secondLarge = i;
    }

    return {secondLarge, secondSmall};
}
