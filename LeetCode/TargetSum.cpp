#include<bits/stdc++.h>
using namespace std;
void findTargetSumWays(vector<int>& nums, int target) {
    int n = nums.size();

    int dp[n+1][target+1];
    
    for(int i=0;i<=n;++i)
    dp[i][0]=true;
    for(int i=1;i<=target;++i)
    dp[0][i]=false;
    int count = 0;
    for(int i = 1;i<=n;++i){
        for(int j=1;j<=target;j++){
            if(nums[i-1] <=j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
            if(dp[i][j])
            count++;
        }
    }
    for(int i = 0;i<=n;++i){
        for(int j=0;j<=target;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    // return count;
}
int main(){
    int n,target;
    cin >> n>>target;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    // cout <<
     findTargetSumWays(nums,target);
    
    return 0;
}