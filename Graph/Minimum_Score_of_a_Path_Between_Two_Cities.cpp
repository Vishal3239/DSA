#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    static const int N=1e5+10;
    vector<pair<int,int>>g[N];
    bool vis[N]={false};
    int minCost=INT_MAX;
    void dfs(int vertix){
        vis[vertix]=true;
        for(pair<int,int> child : g[vertix]){
            minCost=min(minCost,child.second);

            if(!vis[child.first])
            dfs(child.first);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {

        for(int i=0;i<roads.size();++i){

            int v = roads[i][0];
            int u = roads[i][1];
            int wt = roads[i][2];

            g[u].push_back({v,wt});
            g[v].push_back({u,wt});
        }
        dfs(1);
        return minCost;

    }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(3));
    for(int i=0;i<n;++i){
        for(int j=0;j<3;++j){
            cin>>nums[i][j];
        }
    }
    Solution obj;
    cout<<obj.minScore(m,nums);
    
    return 0;
}