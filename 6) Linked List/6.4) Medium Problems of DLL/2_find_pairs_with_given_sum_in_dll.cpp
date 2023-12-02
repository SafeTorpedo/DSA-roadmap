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

vector<pair<int, int>> findPairs(Node *head, int x)
{
    vector<pair<int, int>> ans;

    Node *first = head, *second = head;
    while (second->next != NULL)
        second = second->next;

    while (first != second && second->next != first)
    {
        if (first->data + second->data == x)
        {
            ans.push_back({first->data, second->data});

            first = first->next;
            second = second->prev;
        }
        else
        {
            if (first->data + second->data < x)
                first = first->next;
            else
                second = second->prev;
        }
    }

    return ans;
}
