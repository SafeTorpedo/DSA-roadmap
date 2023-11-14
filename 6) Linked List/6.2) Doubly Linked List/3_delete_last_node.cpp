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

Node *deleteLastNode(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    Node *tail = temp->next;
    temp->next = NULL;
    tail->prev = NULL;
    delete tail;

    return head;
}
