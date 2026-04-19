#include<bits/stdc++.h>
using namespace std;
int maxDistance(vector<int>& nums1, vector<int>& nums2) {
    int maxDist=0;
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<=nums2[j]){
            maxDist=max(maxDist,j-i);
            j++;
        }else{
            i++;
        }
    } 
    return maxDist; 
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<int>nums1(n),nums2(m);
  for(int i=0;i<n;++i)
  cin>>nums1[i];
  for(int i=0;i<m;++i)
  cin>>nums2[i];
cout<<maxDistance(nums1,nums2);

    return 0;
}