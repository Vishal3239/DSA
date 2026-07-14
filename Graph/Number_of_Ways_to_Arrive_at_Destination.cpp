#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<long long> dist;
    vector<vector<pair<int, int>>> g;
    vector<long long> ways;
    static const int M = 1e9 + 7;
    void networkTime(int vertix)
    {
        priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                       greater<pair<long long, int>>>
            q;
        q.push({0, vertix});
        dist[vertix] = 0;
        ways[vertix] = 1;
        while (q.size() > 0)
        {
            pair<long long, int> p = q.top();
            q.pop();
            long long dis = p.first;
            int v = p.second;
            if (dis != dist[v])
                continue;
            for (auto d : g[v])
            {
                int child = d.first;
                long long wt = d.second;
                if (dist[v] + wt < dist[child])
                {
                    dist[child] = dist[v] + wt;
                    ways[child] = ways[v];
                    q.push({dist[child], child});
                }
                else if (dist[v] + wt == dist[child])
                {
                    ways[child] = (ways[child] + ways[v]) % M;
                }
            }
        }
    };

    int countPaths(int n, vector<vector<int>> &roads)
    {
        dist.assign(n, LLONG_MAX);
        g.resize(n);
        ways.assign(n, 0);

        for (auto vic : roads)
        {
            g[vic[0]].push_back({vic[1], vic[2]});
            g[vic[1]].push_back({vic[0], vic[2]});
        }
        networkTime(0);

        return ways[n - 1] % M;
    }
};

int main()
{
    int n, r;
    cin >> n >> r;
    vector<vector<int>> roads(r, vector<int>(3));
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> roads[i][j];
        }
    }
    Solution obj;
    cout << obj.countPaths(n, roads);

    return 0;
}