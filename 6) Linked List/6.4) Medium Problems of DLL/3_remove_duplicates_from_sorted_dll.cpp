#include <bits/stdc++.h>
using namespace std;

// Definition of doubly linked list:
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

void helper(Node *head, Node *del)
{
    if (head == NULL || del == NULL)
        return;

    if (head == del)
        head = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;

    delete (del);
}

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return head;

    Node *current = head, next = NULL;

    while (current->next != NULL)
    {
        if (current->data == current->next->data)
            helper(head, current->next);
        else
            current = current->next;
    }

    return head;
}
