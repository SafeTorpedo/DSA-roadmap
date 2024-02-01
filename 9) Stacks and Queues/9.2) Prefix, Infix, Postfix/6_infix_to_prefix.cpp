#include <bits/stdc++.h>
using namespace std;

string infixToPrefix(string infix) {
    int l = infix.size();

    reverse(infix.begin(), infix.end());

    for (int i = 0; i < l; i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
            i++;
        } else if (infix[i] == ')') {
            infix[i] = '(';
            i++;
        }
    }

    string prefix = infixToPostfix(infix);

    reverse(prefix.begin(), prefix.end());

    return prefix;
}