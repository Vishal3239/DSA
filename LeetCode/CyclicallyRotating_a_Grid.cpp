#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> afterRotation(vector<vector<int>> &grid, int k)
{
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> ans = grid;

    int layers = min(m, n) / 2;

    for (int layer = 0; layer < layers; layer++)
    {
        int top = layer;
        int left = layer;
        int bottom = m - layer - 1;
        int right = n - layer - 1;

        vector<int> temp;

        for (int i = left; i <= right; i++)
            temp.push_back(grid[top][i]);

        for (int i = top + 1; i <= bottom; i++)
            temp.push_back(grid[i][right]);

        for (int i = right - 1; i >= left; i--)
            temp.push_back(grid[bottom][i]);

        for (int i = bottom - 1; i >= top + 1; i--)
            temp.push_back(grid[i][left]);

        int sz = temp.size();

        int rot = k % sz;

        rotate(temp.begin(), temp.begin() + rot, temp.end());

        int idx = 0;

        for (int i = left; i <= right; i++)
            ans[top][i] = temp[idx++];

        for (int i = top + 1; i <= bottom; i++)
            ans[i][right] = temp[idx++];

        for (int i = right - 1; i >= left; i--)
            ans[bottom][i] = temp[idx++];

        for (int i = bottom - 1; i >= top + 1; i--)
            ans[i][left] = temp[idx++];
    }

    return ans;
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> ans = afterRotation(grid, k);

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}