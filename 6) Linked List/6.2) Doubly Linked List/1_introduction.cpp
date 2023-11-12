#include <bits/stdc++.h>
using namespace std;

// Definition for doubly-linked list.
class Node
{
public:
    int data;
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
};

Node *constructDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    head->prev = NULL;
    Node *previous = head;
    Node *curr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        curr->next = new Node(arr[i]);
        curr = curr->next;
        curr->prev = previous;
        previous = previous->next;
    }

    curr->next = NULL;
    return head;
}
