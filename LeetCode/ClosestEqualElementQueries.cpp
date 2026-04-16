#include<bits/stdc++.h>
using namespace std;
vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
    int n = nums.size();
    vector<int> ans;

    for(int qi = 0; qi < queries.size(); qi++) {
        int idx = queries[qi];
        int minDist = INT_MAX;

        for(int j = 0; j < n; j++) {
            if(j != idx && nums[j] == nums[idx]) {
                int d = abs(j - idx);
                int circularD = min(d, n - d);
                minDist = min(minDist, circularD);
            }
        }

        if(minDist == INT_MAX) ans.push_back(-1);
        else ans.push_back(minDist);
    }

    return ans;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>nums(n),queries(q),ans(q);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    for(int i=0;i<q;i++)
    cin>>queries[i];
    ans=solveQueries(nums,queries);
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}