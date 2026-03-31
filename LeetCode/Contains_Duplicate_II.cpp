#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    unordered_map<int,int>mp;
    bool ans=false;
    for(int i=0;i<n;++i){
        
        if(mp.find(nums[i]) !=mp.end()){
            if (i - mp[nums[i]] <= k) {
                ans=true;
                break;
            }
        }
        mp[nums[i]] = i;
    }
    if(ans){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}