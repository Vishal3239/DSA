#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static const int N = 1e5+10;
    int parent[N];
    int size[N];
    
    void make(int v){
        parent[v]=v;
        size[v]=1;
    };
    int find(int v){
        if(v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    };
    void Union(int a, int b){
        a = find(a);
        b = find(b);
        if(a!=b){
            if(size[a]<size[b]){
                swap(a,b);
            }
            parent[b]=a;
            size[a]+=size[b];
        }
    };
    int makeConnected(int n, vector<vector<int>>& connections) {
        for(int i = 1;i<=n;++i){
            make(i);
        }
        int extra=0;
        for(auto &d : connections){
            if(find(d[0]) == find(d[1])){
                extra++;
            }else{
                Union(d[0],d[1]);
            }
        }
        int component=0;
        for(int i = 1;i<=n;++i){
            if(find(i)==i){
                component++;
            }
        }
        if(extra>=component-1){
            return component-1;
        }else{
            return -1;
        }
    }
};

int main(){
    int n,m;
    cin>>n;
    vector<vector<int>>cc(m,vector<int>(2));
    for(int i = 0 ;i<m;++i){
        for(int j = 0;j<2;++j){
            cin>>cc[i][j];
        }
    }
    Solution obj;
    cout<<obj.makeConnected(n,cc);
    

    
    return 0;
}