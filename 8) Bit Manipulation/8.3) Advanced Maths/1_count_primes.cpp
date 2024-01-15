#include <bits/stdc++.h>
using namespace std;

vector<int> countPrimes(int n)
{
    vector<bool> isPrime(n, true);
    vector<int> ans;
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            if (n % i == 0)
                ans.push_back(i);

            for (int j = i * 2; j < n; j += i)
                isPrime[j] = false;
        }
    }
    return ans;
}