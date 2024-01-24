#include <bits/stdc++.h>
using namespace std;

// Definition of linked list
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

// Definition of Queue
struct Queue
{
    Node *front;
    Node *rear;
    void push(int);
    int pop();

    Queue()
    {
        front = rear = NULL;
    }
};

void Queue::push(int x)
{
    Node *tempNode = new Node(x);

    if (front == NULL)
        front = rear = tempNode;
    else
    {
        rear->next = tempNode;
        rear = rear->next;
    }
}

int Queue::pop()
{
    Node *tempNode = front;

    if (tempNode == NULL)
        return -1;

    int ans = tempNode->data;

    if (tempNode->next != NULL)
    {
        tempNode = tempNode->next;
        delete (front);
        front = tempNode;
    }
    else
    {
        delete (front);
        front = rear = NULL;
    }

    return ans;
}