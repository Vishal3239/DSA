#include<bits/stdc++.h>
using namespace std;
static const int N=1e3+10;
vector<int>g[N];
bool vis[N]={false};
int level[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(!q.empty()){
        int curr_vertix = q.front();
        cout<<curr_vertix<<" ";
        q.pop();
        for(int child : g[curr_vertix]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
                level[child]=level[curr_vertix]+1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i){
        int v,u;
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    bfs(1);
    for(int i=1;i<=n;++i){
        cout<< i << ":"<<level[i]<<endl;
    }
    
    return 0;
}