#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<pair<int, int>> dir = {
        {1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>>
            q;
        q.push({0, {0, 0}});
        dist[0][0] = 0;
        while (q.size() > 0)
        {
            pair<int, pair<int, int>> p = q.top();
            q.pop();
            int currEffort = p.first;
            int x = p.second.first;
            int y = p.second.second;
            if (currEffort != dist[x][y])
                continue;
            if (x == m - 1 && y == n - 1)
                return currEffort;

            for (auto d : dir)
            {
                int nx = x + d.first;
                int ny = y + d.second;
                if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                    continue;
                int wt = abs(heights[x][y] - heights[nx][ny]);
                int newEffort = max(dist[x][y], wt);
                if (newEffort < dist[nx][ny])
                {
                    dist[nx][ny] = newEffort;
                    q.push({newEffort, {nx, ny}});
                }
            }
        }
        return dist[m - 1][n - 1];
    }
};

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> hights(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> hights[i][j];
        }
    }
    Solution obj;
    cout << obj.minimumEffortPath(hights);

    return 0;
}