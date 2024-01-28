#include <bits/stdc++.h>
using namespace std;

string prefixToInfixConversion(string &s)
{
    stack<string> operands;
    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string operand1 = operands.top();
            operands.pop();
            string operand2 = operands.top();
            operands.pop();

            string resultantOfTwo = "(" + operand1 + s[i] + operand2 + ")";
            operands.push(resultantOfTwo);
        }
        else
        {
            string strTemp(1, s[i]);
            operands.push(strTemp);
        }
    }

    return operands.top();
}
