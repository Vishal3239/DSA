#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={8,6,3,9,4,2,5,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;++i){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            } 
            
        }
        swap(arr[i],arr[index]);
    }
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}