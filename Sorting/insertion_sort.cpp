#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr,int n){
    for(int j=1;j<n;++j){
        int key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i] > key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1] = key;

    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int x : arr){
        cout<<x<<" ";
    }
    
    return 0;
}