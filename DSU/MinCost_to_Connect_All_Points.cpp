#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static const int N = 1e3 + 10;
    int parent[N];
    int size[N];
    vector<pair<int, pair<int, int>>> edges;
    void make(int v)
    {
        parent[v] = v;
        size[v] = 1;
    }

    int find(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find(parent[v]);
    }

    void Union(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }

    int minCostConnectPoints(vector<vector<int>> &points)
    {
        for (int i = 0; i < points.size(); i++)
        {
            make(i);
        }
        for (int i = 0; i < points.size() - 1; ++i)
        {
            for (int j = i + 1; j < points.size(); ++j)
            {
                int wt = abs(points[i][0] - points[j][0]) +
                         abs(points[i][1] - points[j][1]);
                edges.push_back({wt, {i, j}});
            }
        }
        sort(edges.begin(), edges.end());
        int ans = 0;
        for(auto e : edges){
            int wt = e.first;
            int u = e.second.first;
            int v = e.second.second;

            if(find(u) != find(v)){
                Union(u,v);
                ans+=wt;
            }
        }
        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>cc(n,vector<int>(2));
    for(int i = 0 ;i<n;++i){
        for(int j = 0;j<2;++j){
            cin>>cc[i][j];
        }
    }
    Solution obj;
    cout<<obj.minCostConnectPoints(cc);
    return 0;
}