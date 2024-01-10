#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int ans = 0;

        while (goal || start)
        {
            bool goalBit = goal & 1;
            bool startBit = start & 1;

            if (goalBit)
            {
                if (!startBit)
                    ans++;
            }
            else
            {
                if (startBit)
                    ans++;
            }

            start >>= 1;
            goal >>= 1;
        }

        return ans;
    }
};