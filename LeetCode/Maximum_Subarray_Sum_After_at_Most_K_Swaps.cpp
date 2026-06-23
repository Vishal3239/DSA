#include<bits/stdc++.h>
using namespace std;
long long maxSum(vector<int>& nums, int k) {
    int n=nums.size();
    vector<vector<long long>>dp(n+1,vector<long long >(k+1));
    for(int i=0;i<k+1;++i){
        dp[0][i]=0;
    }
    for(int i=1;i<n+1;++i){
        dp[i][0]=1;
    }

    for(int i=1;i<n+1;++i){
        for(int j=1;j<k+1;++j-){
            if(nums[i-1]<=j ){
                dp[i][j] = swap()
            }
        }
    }

}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];

    cout<<maxSum(nums,k);
    
    return 0;
}