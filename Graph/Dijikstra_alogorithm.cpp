#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e8 + 10;
vector<pair<int, int>> g[N];
vector<int> dijistra(int vertix)
{
    vector<bool> vis(N, false);
    vector<int> dist(N, INF);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>>
    q;

    q.push({0, vertix});
    dist[vertix] = 0;

    while (q.size() > 0)
    {
        pair<int, int> p = q.top();
        q.pop();
        int dis = p.first;
        int v = p.second;
        if (vis[v])
            continue;
        vis[v] = true;
        for (auto d : g[v])
        {
            int child = d.first;
            int wt = d.second;
            if (dist[v] + wt < dist[child])
            {
                dist[child] = dist[v] + wt;
                q.push({dist[child], child});
            }
        }
    }
    return dist;
    
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v, u, w;
        cin >> v >> u >> w;
        g[v].push_back({u, w});
    }
   vector<int>ans= dijistra(1);
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";

    return 0;
}