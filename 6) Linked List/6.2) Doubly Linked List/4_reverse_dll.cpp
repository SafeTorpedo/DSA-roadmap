#include <bits/stdc++.h>
using namespace std;

// Definition of doubly linked list:
struct Node
{
    int value;
    Node *prev;
    Node *next;
    Node() : value(0), prev(nullptr), next(nullptr) {}
    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
    Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
};

Node *reverseDLL(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
        return head;

    Node *curr = head;
    Node *newHead = NULL;

    while (curr != NULL)
    {
        Node *temp = curr->prev;
        newHead = temp;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    return newHead->prev;
}
