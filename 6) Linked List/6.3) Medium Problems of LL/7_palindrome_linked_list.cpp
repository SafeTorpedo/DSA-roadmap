#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;

        stack<int> st;
        ListNode *current = head;

        while (current != NULL)
        {
            st.push(current->val);
            current = current->next;
        }

        while (head != NULL)
        {
            if (head->val != st.top())
                return false;

            head = head->next;
            st.pop();
        }

        return true;
    }
};