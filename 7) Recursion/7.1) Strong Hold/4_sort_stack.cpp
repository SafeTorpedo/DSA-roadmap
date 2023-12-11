#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> s, int x)
{
    if (s.empty() || x > s.top())
    {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();
    sortedInsert(s, x);

    s.push(temp);
}

void sortStack(stack<int> s)
{
    if (!s.empty())
    {
        int x = s.top();
        s.pop();

        sortStack(s);

        sortedInsert(s, x);
    }
}