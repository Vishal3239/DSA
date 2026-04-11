#include<bits/stdc++.h>
using namespace std;
int minimumDistance(vector<int>& nums) {
    unordered_map<int,pair<int,vector<int>>>mp;
    for(int i=0;i<nums.size();++i){
        mp[nums[i]].first++;
        mp[nums[i]].second.push_back(i); 
    }
    int minDist=INT_MAX;
    for(auto it : mp){
        if(it.second.first>=3){
            vector<int>&v=it.second.second;
            for(int i = 0; i + 2 < v.size(); i++){
                int a = v[i];
                int b = v[i+1];
                int c = v[i+2];

                int sum = abs(a-b) + abs(b-c) + abs(c-a);
                minDist = min(minDist, sum);
            }
        }
    }   
    if(minDist == INT_MAX) return -1;
    return minDist;
}
int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;++i)
  cin>>nums[i];
  cout<<minimumDistance(nums);
  return 0;
}