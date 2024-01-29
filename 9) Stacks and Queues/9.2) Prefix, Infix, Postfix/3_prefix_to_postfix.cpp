#include <bits/stdc++.h>
using namespace std;

string preToPost(string s)
{
    stack<string> st;

    reverse(s.begin(), s.end());

    vector<char> o = {'+', '-', '/', '*'};

    for (int i = 0; i < (int)s.size(); ++i)
    {
        bool isOp = false;

        for (int j = 0; j < 4; ++j)
        {
            if (s[i] == o[j])
            {
                isOp = true;
            }
        }

        string cur = "";
        cur += s[i];

        if (isOp == false)
        {
            st.push(cur);
        }
        else
        {
            string s1 = st.top();
            st.pop();

            string s2 = st.top();
            st.pop();

            st.push(s1 + s2 + cur);
        }
    }

    return st.top();
}