#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// first take cur as largest
// cur is n/2 - 1
// we will search left and right
// we will update largest by swapping
void heapify(int arr[], int n, int cur){
    int largest = cur;
    int leftChild = 2*cur + 1;
    int rightChild = 2*cur + 2;

    if(leftChild<n && arr[leftChild]>arr[largest]){
        largest = leftChild;
    }
    if(rightChild<n && arr[rightChild]>arr[largest]){
        largest = rightChild;
    }

    if(largest != cur){
        swap(arr[cur], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int s){
    for(int i=s-1;i>=0;i--){
        swap(arr[0], arr[i]);
        heapify(arr,i,0);
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    
    // heap
    // heap is a complete binary tree

    // max heap
    // parents in a heap is always bigger or equal than children

    // min heap
    // parents in a heap is always smaller or equal than children

    int n; 
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // heapify
    int nonLeafStart = (n/2) - 1;
    for(int i=nonLeafStart;i>=0;i--){
        heapify(arr,n,i);
    }

    cout<<endl<<"before heapsort"<<endl;
    printArray(arr, n);

    heapSort(arr,n);

    cout<<"after heapsort"<<endl;
    printArray(arr, n);


    return 0;
}

/*
9 
2 10 1 5 4 8 3 8 7

*/