#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(vector<int>&nums,int n,int targate){
    int left = 0;
    int sum = 0;
    int minLen = INT_MAX;
    for(int right=0;right<n;++right){
        sum += nums[right];
        while(sum>=targate){
            minLen = min(minLen,right-left+1);
            sum-=nums[left];
            left++;
        }
    }
    return (minLen==INT_MAX)?0:minLen;
}
int main(){
  int n,targate;
  cin>>n>>targate;
  vector<int>nums(n);
  for(int i=0;i<n;++i)
  cin>>nums[i];
  cout<<minSubArrayLen(nums,n,targate);
  return 0;
}