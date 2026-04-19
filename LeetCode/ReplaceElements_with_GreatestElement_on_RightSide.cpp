#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>nums(n),ans;
  for(int i=0;i<n;++i){
    cin>>nums[i];

  }
  int gretest=-1;
  for(int i=n-1;i>=0;--i){
    ans.push_back(gretest);

    gretest=max(gretest,nums[i]);
  }
  reverse(ans.begin(),ans.end());
  for(auto x:ans)
  cout<<x<<" ";
  return 0;
}