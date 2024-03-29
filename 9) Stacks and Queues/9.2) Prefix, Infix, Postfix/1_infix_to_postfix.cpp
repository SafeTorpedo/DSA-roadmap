#include <bits/stdc++.h>
using namespace std;

bool isOperator(char ch)
{
    if (ch - 'a' >= 0 && ch - 'a' <= 25)
        return true;
    else if (ch - '0' >= 0 && ch - '0' <= 9)
        return true;
    else
        return false;
}

string infixToPostfix(string exp)
{
    string ans = "";
    stack<char> s;

    unordered_map<char, int> precedence;

    precedence['^'] = 3;
    precedence['*'] = 2;
    precedence['/'] = 2;
    precedence['+'] = 1;
    precedence['-'] = 1;
    precedence['('] = 0;
    precedence[')'] = 0;

    for (int i = 0; i < exp.length(); i++)
    {
        if (isOperator(exp[i]))
            ans += exp[i];
        else if (exp[i] == ')')
        {
            while (s.top() != '(')
            {
                ans += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (exp[i] == '(')
            s.push(exp[i]);
        else
        {
            while (s.size() && precedence[s.top()] >= precedence[exp[i]])
            {
                ans += s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
    }
    while (s.size())
    {
        ans += s.top();
        s.pop();
    }
    return ans;
}