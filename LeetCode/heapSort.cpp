#include<bits/stdc++.h>
using namespace std;




void Heapfy(int arr[], int n,int index){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<n && arr[left]>arr[largest])
    largest=left;
    if(right<n && arr[right]>arr[largest])
    largest=right;
    if(largest!=index){
        swap(arr[largest],arr[index]);
        Heapfy(arr,largest,n);
    }

}

void HeapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;--i){
        Heapfy(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        
        Heapfy(arr,i,0);
        
    }
    
}



void printMaxHeap(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,10,7,23,50,90,15,30,75};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    HeapSort(arr,size);
    cout<<endl;
    printMaxHeap(arr,size);


    return 0;
}