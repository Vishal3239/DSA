#include<bits/stdc++.h>
using namespace std;
const int  N = 1e3 + 10;
vector<int>g[N];
int height[N],depth[N];
void DFS(int vertix,int par){
    
    for(int child : g[vertix]){

        if(child==par) continue;
        depth[child]=depth[vertix]+1;
        DFS(child,vertix);
        height[vertix]=max(height[vertix],height[child]+1);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    DFS(1,0);
    for(int i=1;i<=n;++i){
        cout<<depth[i]<<" "<<height[i]<<endl;
    }
    
    return 0;
}