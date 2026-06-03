#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
vector<int>curr;
void solve(int indx,vector<int>& nums){
    if(indx==nums.size()){
        ans.push_back(curr);
        return;
    }
    curr.push_back(nums[indx]);
    solve(indx+1,nums);
    curr.pop_back();
    solve(indx+1,nums);
    
}


vector<vector<int>>subset(vector<int>& nums){
    solve(0,nums);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    vector<vector<int>>output;
    output=subset(nums);
    for(int i = 0;i<output.size();++i){
        for(int j=0;j<output[i].size();++j){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}