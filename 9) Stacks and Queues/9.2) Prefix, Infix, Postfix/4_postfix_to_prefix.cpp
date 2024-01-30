#include <bits/stdc++.h>
using namespace std;

string postfixToPrefix(string s)
{
    stack<string> stk;

    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string op1 = stk.top();
            stk.pop();
            string op2 = stk.top();
            stk.pop();

            string temp = s[i] + op2 + op1;

            stk.push(temp);
        }
        else
        {
            string add = "";
            add += s[i];
            stk.push(add);
        }
    }

    string ans = "";

    while (stk.size() != 0)
    {
        ans += stk.top();
        stk.pop();
    }

    return ans;
}
