#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<pair<int, double>>> g;
    vector<double> dist;
    void Probability(int vertix)
    {
        priority_queue<
            pair<double, int>,
            vector<pair<double, int>>,
            less<pair<double, int>>>
            q;
        q.push({1.0, vertix});
        dist[vertix] = 1.0;
        while (q.size() > 0)
        {
            pair<double, int> p = q.top();
            q.pop();
            double dis = p.first;
            int v = p.second;

            if (dis != dist[v])
                continue;
            for (auto d : g[v])
            {
                int child = d.first;
                double wt = d.second;
                if (dist[v] * wt > dist[child])
                {
                    dist[child] = dist[v] * wt;
                    q.push({dist[child], child});
                }
            }
        }
    }
    double maxProbability(int n, vector<vector<int>> &edges, vector<double> &succProb, int start_node, int end_node)
    {
        g.resize(n);
        dist.assign(n, 0.0);
        int N = edges.size();
        int i = 0;
        for (auto vic : edges)
        {
            g[vic[0]].push_back({vic[1], succProb[i]});
            g[vic[1]].push_back({vic[0], succProb[i]});

            i++;
        }
        Probability(start_node);
        return dist[end_node] == 0.0 ? 0 : dist[end_node];
    }
};

int main()
{
    int n, e, s, en;
    cin >> n >> e >> s >> en;
    vector<vector<int>> edges(e, vector<int>(2));
    for (int i = 0; i < e; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> edges[i][j];
        }
    }
    vector<double> succProb(e);
    for (int i = 0; i < e; ++i)
    {
        cin >> succProb[i];
    }
    Solution obj;
    cout << obj.maxProbability(n, edges, succProb, s, en);

    return 0;
}