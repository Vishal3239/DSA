#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums,int left,int right){
    if(left == right) return left;
    int mid = left + (right-left)/2;
    if(nums[mid]>nums[mid+1])
    {
        solve(nums,left,mid);
    }else{
        solve (nums,mid+1,right);
    }
}
int peakElement(vector<int>&nums){
    return solve(nums,0,nums.size()-1);
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i < n; i++)
    cin>>nums[i];
    cout<<peakElement(nums);
    
    return 0;
}