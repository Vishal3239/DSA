#include<bits/stdc++.h>
using namespace std;
vector<int>curr;
vector<vector<int>>ans;
void solve(int indx, vector<int>& nums) {
        if (indx == nums.size()) {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[indx]);
        solve(indx + 1, nums);
        curr.pop_back();
        solve(indx + 1, nums);
    }
vector<vector<int>>solve(vector<int>& arr){
    solve(0,arr);
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    ans=solve(arr);
    for(auto row:ans){
        for(auto x:row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}