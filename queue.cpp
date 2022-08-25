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
    // enqueue
    // corner case
    //c1: s==f means our array is full
    /*
    if(f == -1 && r == -1){
        f++;
        r++;
        arr[r] = val;
    }else{
        // c1:
        if(s!=f){
            s = r+1 mod(n);
            arr[s];
        }else "queue full";   
    }
    */
   // deque
   /*
   return = arr[f];
   f = f+1 mod(n);
   */

    return 0;
}