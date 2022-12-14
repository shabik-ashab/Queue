#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Architecture of queue -> fast in first out (FIFO)
    // front and rear pointer
    // linear data structure
    // enqueue operation (add elements)
    // dequeue operation (delete elements)
    // peek operation
    // empty operation

    // queue using array
    // initially front anr rear pointer will set to -1

    // enqueue O(1)
    // we will add element at rear pointer
    // corner case
    //c1: s==f means our array is full
    /*
    if(f == -1 && r == -1){
        f++;
        r++;
        arr[r] = val;
    }else{
        //c1:
        if(s!=f){
            s = r+1 mod(n);
            arr[s];
        }else "queue full || overflow";   
    }
    */

    // deque O(1)
    // we will del elem from front pointer
    // corner case
     //c1: f==r means queue is underflow
    /*
    if(arr[f] ! =0)
     return = arr[f];
     else if(arr[f] == 0 && f==r){
            "underflow";
            return -1;
    }    
    //c1:
    if(f!=r)
        f = f+1 mod(n);
    else
        arr[f] = 0;
    */
  
    // problem implemeting queue using array
    //1. memory is static we can not change 
    //2. chances of overflow 
    //3. chances of underflow 

    // queue using Linked list
    // at fitst front and rear pointer will set to NULL pointer

    // enqueue operation (add elements)
    /*
        Node* newNode;
        if(f == NULL){
            f = newNode;
            r = newNode;
            return;
        }
        r->Next = newNode;
        r = r->Next;
    */


    // dequeue operation (delete elements)
    // we will delete at head
    /*
        if(f == NULL) "underflow";
        delNode = f;
        f = f->Next;
        if(f == r) r = NULL:

        delete delNode;
    */

    // peek operation
    // empty operation

    return 0;
}