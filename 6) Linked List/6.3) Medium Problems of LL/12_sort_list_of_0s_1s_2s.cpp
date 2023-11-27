#include <bits/stdc++.h>
using namespace std;

// Following is the class structure of the Node class:
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *merge(Node *list1, Node *list2)
{
    Node *ptr = new Node(-1);
    Node *curr = ptr;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            curr->next = list1;
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }

        curr = curr->next;
    }

    if (list1 != NULL)
    {
        curr->next = list1;
        list1 = list1->next;
    }

    if (list2 != NULL)
    {
        curr->next = list2;
        list2 = list2->next;
    }

    Node *ans = ptr->next;
    delete (ptr);
    return ans;
}

Node *sortList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL, *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = NULL;

    Node *list1 = sortList(head);
    Node *list2 = sortList(slow);

    return merge(list1, list2);
}
