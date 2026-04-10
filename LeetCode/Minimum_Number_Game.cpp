#include<bits/stdc++.h>
using namespace std;
vector<int> numberGame(vector<int>& nums) {
    vector<int>ans;
    sort(nums.begin(),nums.end());
    int j=1;
    for(int i=0;i<nums.size();i+=2){
        ans.push_back(nums[j+i]);
        ans.push_back(nums[i]);
    }
    return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int>nums(n),ans;
  for(int i=0;i<n;++i)
  cin>>nums[i];
  ans=numberGame(nums);
  for(auto x:ans)
  cout<<x<<" ";
  return 0;
}