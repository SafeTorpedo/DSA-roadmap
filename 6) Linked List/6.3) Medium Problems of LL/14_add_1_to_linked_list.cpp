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

Node *helper(Node *head)
{
    Node *ans = head;
    Node *temp;
    int carry = 1, sum;

    while (head != NULL)
    {
        sum = carry + head->data;

        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;

        head->data = sum;

        temp = head;
        head = head->next;
    }

    if (carry > 0)
        temp->next = new Node(carry);

    return ans;
}

Node *reverse(Node *head)
{
    Node *prev = NULL, *current = head;
    Node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

Node *addOne(Node *head)
{
    head = reverse(head);

    head = helper(head);

    return reverse(head);
}
