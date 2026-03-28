#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>&arr,int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left = start,right=mid+1,index=0;

    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index++] = arr[left++];
        }else{
            temp[index++] = arr[right++];
        }
    }

    while(left<=mid){
        temp[index++] = arr[left++];
    }

    while(right<=end){
        temp[index++] = arr[right++];
    }

    for(int i=0;i<temp.size();i++){
        arr[start+i] = temp[i];
    }
}

void Merge_Sort(vector<int>&arr,int start,int end){
    if(start >= end) return;

    int mid = start+(end-start)/2;

    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);

    mergeArray(arr,start,mid,end);
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++)
        cin>>nums[i];

    Merge_Sort(nums,0,n-1);

    for(int x:nums) cout<<x<<" ";
}