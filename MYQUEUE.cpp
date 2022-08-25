#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = NULL;
    }
};

class Queue{
    Node* front;
    Node* rear;

public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    //enqueue ---> push

    void push(int val){
        Node* newNode = new Node(val);

        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = rear->next;
    }

    //dequeue ---> pop

    //peel ---> front() back()

    //empty
};

int main()
{
    
    return 0;
}