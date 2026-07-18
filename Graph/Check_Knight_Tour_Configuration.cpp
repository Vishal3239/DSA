#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<bool>> vis;
    vector<pair<int, int>> dir = {
        {-1, 2}, {1, 2}, {-1, -2}, {1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

    bool isValid(int i, int j, int n)
    {
        return i >= 0 && j >= 0 && i < n && j < n;
    };

    bool checkValidGrid(vector<vector<int>> &grid)
    {
        int n = grid.size();

        vis.assign(n, vector<bool>(n, false));
        queue<pair<pair<int, int>, int>> q;
        q.push({{0, 0}, 1});
        vis[0][0] = true;
        int count = 1;
        while (q.size() > 0)
        {
            pair<pair<int, int>, int> v = q.front();
            q.pop();
            int x = v.first.first;
            int y = v.first.second;
            int source = v.second;

            for (auto d : dir)
            {
                int nx = x + d.first;
                int ny = y + d.second;

                if (!isValid(nx, ny, n))
                    continue;
                if (vis[nx][ny])
                    continue;

                if (grid[nx][ny] == source)
                {
                    vis[nx][ny] = true;
                    count++;
                    q.push({{nx, ny}, source + 1});
                }
            }
        }
        if (count != n * n)
            return false;
        return true;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[i][j];
        }
    }
    Solution obj;
    cout << obj.checkValidGrid(grid);

    return 0;
}