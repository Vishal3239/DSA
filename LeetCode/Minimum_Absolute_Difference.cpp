#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<pair<pair<int,int>,int>>dif;
        int minDif = INT_MAX;
        for(int i = 1;i<arr.size();++i){
            minDif = min(minDif,arr[i]-arr[i-1]);
            dif.push_back({{arr[i-1],arr[i]},arr[i]-arr[i-1]});
        }
        vector<vector<int>>ans;
        for(auto x:dif){
            if(x.second==minDif){
                ans.push_back({x.first.first,x.first.second});
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    vector<vector<int>>ans;
    Solution obj;
    ans=obj.minimumAbsDifference(nums);
    for(auto x : ans){
        cout<<x[0]<<" " <<x[1]<<endl;
    }

    
    return 0;
}