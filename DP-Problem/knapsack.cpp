#include<bits/stdc++.h>
using namespace std;
const int wSize=1000;
const int nSize=100;
vector<vector<int>>DP(nSize+2,vector<int>(wSize+2,-1));
int knapsack(vector<int>& wt,vector<int>& val,int W,int n){
    if(n==0 || W==0){
        return 0;
    }
    if(DP[n][W] != -1){
        return DP[n][W];
    }
    if(wt[n - 1] <= W){
        int take = val[n-1]+knapsack(wt,val,W-wt[n-1],n-1);
        int notTake = knapsack(wt,val,W,n-1);
        return DP[n][W]=max(take,notTake);
    }else{
       return DP[n][W]=knapsack(wt,val,W,n-1);
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
    cout<<knapsack(itemWt,itemval,W,n);
    
    return 0;

}