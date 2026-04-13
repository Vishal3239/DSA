#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<n;++i){
        int temp=t-nums[i];
        if(mp.count(temp)){
            ans.push_back(mp[temp]);
            ans.push_back(i);
        }
        mp[nums[i]]=i;
    }
    for(auto x:ans)
    cout<<x<<" ";

    return 0;
}