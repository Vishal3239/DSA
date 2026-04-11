#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums, int n) {
    vector<int>ans(n);
    int prefix=1;
    for(int i=0;i<n;i++){
        ans[i]=prefix;
        prefix=(prefix*nums[i]);
    }
    int sufix=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=(ans[i]*sufix);
        sufix=(sufix*nums[i]);
    }
    return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int>nums(n),ans(n);
  for(int i = 0; i < n; i++)
  cin>>nums[i];
  ans = productExceptSelf(nums,n);
  for(auto x:ans)
  cout<<x<<" ";
  return 0;
}