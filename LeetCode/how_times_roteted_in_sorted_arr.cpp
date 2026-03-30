#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int targate=arr[0];
    
    sort(arr.begin(),arr.end());
    
    int start = arr[0];
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==targate){
            cout<<n-mid;
            break;
        }else if(arr[mid]>targate){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return 0;
}