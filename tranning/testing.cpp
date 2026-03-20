#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,in=0;
    cin>>n>>k;
    int arr[n];
    int arr1[n];
    
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]%k==0){
            arr1[in]=arr[i];
            in++;
        }
    }
   
    
}