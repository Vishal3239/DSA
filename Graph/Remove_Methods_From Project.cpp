#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<vector<int>> adj;
    vector<int>vis;
    void dfs(int node,vector<vector<int>>& invocations){
        vis[node]=1;
        for(auto d : adj[node]){
            if(!vis[d]){
                dfs(d,invocations);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        adj.assign(n,vector<int>(n));
        vis.assign(n,0);
        for(auto x : invocations){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
        }
        dfs(k,invocations);
        for(auto x : invocations){
            int u = x[0];
            int v = x[1];
            if(vis[u]==0&&vis[v]==1){
                vector<int>ans;
                for(int i = 0;i<n;++i){
                    ans.push_back(i);
                }
                return ans;
            }
        }
        
    }
};
int main(){
    
    
    return 0;
}