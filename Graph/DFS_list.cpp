#include<bits/stdc++.h>
using namespace std;
const int  N = 1e3 + 10;
vector<int>g[N];
bool vis[N];
void DFS(int vertix){
    cout<<vertix<<endl;
    vis[vertix]=true;
    for(int child : g[vertix]){
        cout<<"par-> "<<vertix<<" child -> "<< child<<endl;
        if(vis[child]) continue;
        DFS(child);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    DFS(1);
    
    return 0;
}