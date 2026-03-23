#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[],int start,int end){
    if(start>=end)
    return;
    int pivot = partition(arr,start,end);
    // for left
    quickSort(arr,start,pivot-1);
    // for right
    quickSort(arr,pivot+1,end);
}

int main(){
    int arr[]={8,1,44,2,4,20,3,5,6,10};
    quickSort(arr,0,9);
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}