#include<bits/stdc++.h>
using namespace std;
int findLHS(vector<int>& nums) {
    unordered_map<int,int>m;
    for(int x:nums){
        m[x]++;
    }
    int maxLen=0;
    for(auto it : m){
        int x=it.first;
        if(m.count(x+1)){
            int len=m[x]+m[x+1];
            maxLen=max(maxLen,len);
        }
    }
    return maxLen;
    
}
int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++)
  cin>>nums[i];
  int size = findLHS(nums);
  cout<<size;
  return 0;
}