#include <bits/stdc++.h>
using namespace std;

template <typename N>
class doublyNode
{
public:
    N value;
    doublyNode *next;

    doublyNode(N val)
    {
        value = val;
        next = NULL;
    }
};

template <typename Q>
class Queue
{
    doublyNode<Q> *front;
    doublyNode<Q> *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue ---> push

    void push(Q val)
    {
        doublyNode<Q> *newNode = new doublyNode<Q>(val);

        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = rear->next;
    }

    // dequeue ---> pop

    Q pop()
    {
        Q chk;
        if (rear == NULL)
        {
            cout << "queue underflow || there is no element" << endl;
            return chk;
        }

        doublyNode<Q> *delNode;
        delNode = front;

        front = front->next;
        if (front == NULL)
            rear = NULL;
        chk = delNode->value;

        delete delNode;
        return chk;
    }

    // peel ---> front() back()
    Q Front()
    {
        Q chk = front->value;
        return chk;
    }

    Q Back()
    {
        Q chk = rear->value;
        return chk;
    }

    // empty
    bool empty()
    {
        if (front == NULL && rear == NULL)
            return true;
        else
            return false;
    }
};