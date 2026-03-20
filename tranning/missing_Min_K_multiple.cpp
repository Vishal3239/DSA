#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    int flag=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int m=k;
    for(int i=0;i<n;++i){
        if(arr[i]==m){
            m+=k;
            flag=1;
            i=-1;
        }
    }
    if(flag==1)
    cout<<m;
    else
    cout<<k;
    
    
    
    
    return 0;
    
}