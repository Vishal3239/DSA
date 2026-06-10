#include<bits/stdc++.h>
using namespace std;

void knapsack(vector<int>& wt,vector<int>& val,int W,int n){
    vector<vector<int>>dp(n+1,vector<int>(W+1));
    for(int i=0;i<W+1;++i)
    dp[0][i]=0;
    for(int i=0;i<n+1;++i)
    dp[i][0]=0;

    for(int i=1;i<n+1;++i){
        for(int j=1;j<W+1;++j){
            if(wt[i-1] <= j ){
                dp[i][j] = max((val[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;++i){
        for(int j=0;j<W+1;++j){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,W;
    cin>>n>>W;
    vector<int>itemWt(n),itemval(n);
    for(int i=0;i<n;i++){
        cin>>itemWt[i];
    }

    for(int i=0;i<n;i++){
        cin>>itemval[i];
    }
    knapsack(itemWt,itemval,W,n);
    
    return 0;

}