#include <bits/stdc++.h>
#include"MYQUEUE.h"

using namespace std;

int main()
{
    Queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    if(!q.empty()){
        cout<<q.Front()<<endl;
    }

    if(!q.empty()){
        cout<<q.Back()<<endl;
    }

    while(!q.empty()){
        cout<<q.pop()<<" ";
    }
    return 0;
}