#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>g[N];
bool vis[N];
vector<vector<int>>cc;
vector<int>curr;

void dfs(int vertix){
    curr.push_back(vertix);
    vis[vertix]=true;
    for(int child : g[vertix]){
        if(vis[child])
        continue;
        dfs(child);
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;++i){
        if(vis[i]) continue;
        curr.clear();
        dfs(i);
        cc.push_back(curr);
    }
    for(auto x : cc){
        for(int y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}