#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    int first=-1;
    int last=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k){
            first=mid;
            high=mid-1;
        }else if(nums[mid]<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    low = 0, high = n - 1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k){
            last=mid;
            low=mid+1;
        }else if(nums[mid]<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    cout<<first<<" "<<last;
}