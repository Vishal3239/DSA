#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int>m1;
    unordered_set<int>s,s1;
    
    for(int i=0;i<nums2.size();++i)
    m1[i]=nums2[i];
    for(auto x:nums1){
        s.insert(x);
    }
    for(auto x:m1){
        if(s.count(x.second))
        s1.insert(x.second);
    }
    vector<int>ans(s1.begin(),s1.end());
    return ans;
}
int main(){
  int n1,n2;
  cin>>n1>>n2;
  vector<int>nums1(n1),nums2(n2),ans;
  for(int i=0;i<n1;++i)
  cin>>nums1[i];
  for(int i=0;i<n2;++i)
  cin>>nums2[i];
  ans=intersection(nums1,nums2);
  for(auto x:ans)
  cout<<x<<" ";
  return 0;
}