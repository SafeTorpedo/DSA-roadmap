#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct Node
{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

int lengthOfLoop(Node *head)
{
    unordered_set<Node *> visited;
    Node *current = head;
    int ans = 0;

    while (current != NULL)
    {
        if (visited.find(current) != visited.end())
        {
            Node *start = current;
            do
            {
                ans++;
                current = current->next;
            } while (current != start);

            return ans;
        }

        visited.insert(current);
        current = current->next;
    }

    return 0;
}