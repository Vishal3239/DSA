#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    const long long MOD=1000000007;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i=0;i<m;++i){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<pair<__int128,__int128>>> dp(m, vector<pair<__int128,__int128>>(n));
    dp[0][0] = {grid[0][0], grid[0][0]};
    for(int i=0;i<m;++i){
        
        for(int j=0;j<n;j++){
            vector<__int128> pro;
            if(i==0 && j==0) continue;
            if(i>0){
            pro.push_back(dp[i-1][j].first*grid[i][j]);
            pro.push_back(dp[i-1][j].second*grid[i][j]);
            }

            if(j>0){
            pro.push_back(dp[i][j-1].first*grid[i][j]);
            pro.push_back(dp[i][j-1].second*grid[i][j]);
            }
            long long max=*max_element(pro.begin(),pro.end());
            long long min=*min_element(pro.begin(),pro.end());
            
            dp[i][j].first = max;
            dp[i][j].second = min;
        }
        

    }

    if(dp[m-1][n-1].first<0){
        cout<<-1;
    }else{
       long long ans = (long long)(dp[m-1][n-1].first % MOD);
cout << ans;
    }
}