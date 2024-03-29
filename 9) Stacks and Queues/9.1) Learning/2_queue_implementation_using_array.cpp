#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    Queue()
    {
        front = 0;
        rear = 0;
        arr.resize(100001);
    }

    void enqueue(int e)
    {
        arr[rear] = e;
        rear++;
    }

    int dequeue()
    {
        if (front == rear)
            return -1;
        return arr[front++];
    }

private:
    int front, rear;
    vector<int> arr;
};