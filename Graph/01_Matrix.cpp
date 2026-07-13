#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<bool>> vis;
    vector<vector<int>> dist;

    vector<pair<int, int>> movement = {
        {0, 1}, {-1, 0}, {0, -1}, {1, 0}};

    bool isValid(int i, int j, int m, int n)
    {
        return i >= 0 && j >= 0 && i < m && j < n;
    }

    void reset(int m, int n)
    {
        vis.assign(m, vector<bool>(n, false));
    }

    void bfs(int i, int j, vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int step = 1;
        queue<pair<pair<int, int>, int>> q;
        q.push({{i, j}, step});
        vis[i][j] = true;
        while (!q.empty())
        {
            pair<pair<int, int>, int> v = q.front();
            q.pop();
            int x = v.first.first;
            int y = v.first.second;
            int step = v.second;

            for (auto d : movement)
            {
                int nx = x + d.first;
                int ny = y + d.second;

                if (!isValid(nx, ny, m, n))
                    continue;
                if (mat[nx][ny] == 0)
                {
                    dist[i][j] = step;
                    return;
                }
                if (vis[nx][ny])
                    continue;
                q.push({{nx, ny}, step + 1});
                vis[nx][ny] = true;
            }
        }
    }

    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        dist.assign(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] != 0)
                {
                    reset(m, n);
                    bfs(i, j, mat);
                }
            }
        }
        return dist;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    Solution obj;
    vector<vector<int>> ans = obj.updateMatrix(grid);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}