#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>dist;
    vector<vector<pair<int,int>>> g;

    void networkTime(int vertix){
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>>
        q;
        q.push({0,vertix});
        dist[vertix]=0;
        while(q.size()>0){
            pair<int,int>p = q.top();
            q.pop();
            int dis = p.first;
            int v = p.second;
            if(dis !=dist[v]) continue;
            for(auto d : g[v]){
                int child = d.first;
                int wt = d.second;
                if(dist[v] != INT_MAX && dist[v]+wt < dist[child]){
                    dist[child]=dist[v]+wt;
                    q.push({dist[child],child});
                }
            }
        }
    };

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        dist.assign(n+1,INT_MAX);
        g.resize(n+1);

        for(auto vic : times){
            g[vic[0]].push_back({vic[1],vic[2]});
        }
        networkTime(k);
        int ans = 0;
        for(int i=1;i<=n;++i){
            if(dist[i]==INT_MAX) return -1;
            ans = max(ans,dist[i]);
        }
        return ans;
    }
};

int main(){
    int t,n,k;
    cin>>t>>n>>k;
    vector<vector<int>>time(t,vector<int>(3));
    for(int i=0;i<t;++i){
        for(int j=0;j<3;++j){
            cin>>time[i][j];
        }
    }
    Solution obj;
    cout<<obj.networkDelayTime(time,n,k);
    return 0;
}