#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr_sum=0;
    int totle_sum=0;
    totle_sum= n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        arr_sum+=arr[i];
    }
    cout<<totle_sum-arr_sum;
     
    
        
        
    
    return 0;
}