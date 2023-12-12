#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st, int x)
{
    if (st.size() == 0)
        st.push(x);
    else
    {
        int a = st.top();
        st.pop();
        insert_at_bottom(st, x);

        st.push(a);
    }
}

void reverseStack(stack<int> &st)
{
    if (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        reverseStack(st);

        insert_at_bottom(st, x);
    }

    return;
}