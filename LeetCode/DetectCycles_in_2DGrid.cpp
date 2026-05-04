#include <bits/stdc++.h>
using namespace std;
int m, n;
vector<vector<bool>> visited;

bool dfs(vector<vector<char>> &grid, int x, int y, int px, int py, char val)
{
    visited[x][y] = true;

    int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    for (auto &d : dirs)
    {
        int nx = x + d[0];
        int ny = y + d[1];

        if (nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny] == val)
        {

            // If not visited → go deeper
            if (!visited[nx][ny])
            {
                if (dfs(grid, nx, ny, x, y, val))
                    return true;
            }
            // If visited AND not parent → cycle
            else if (nx != px || ny != py)
            {
                return true;
            }
        }
    }
    return false;
}

bool containsCycle(vector<vector<char>> &grid)
{
    m = grid.size();
    n = grid[0].size();
    visited.assign(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j])
            {
                if (dfs(grid, i, j, -1, -1, grid[i][j]))
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[i][j];
        }
    }
    cout << containsCycle(grid);

    return 0;
}