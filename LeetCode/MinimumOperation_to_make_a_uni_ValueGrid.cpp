#include <bits/stdc++.h>
using namespace std;
int minOperation(vector<vector<int>> &grid, int x)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<int> temp;
    for (auto row : grid)
    {
        for (auto val : row)
        {
            temp.push_back(val);
        }
    }
    int rem = temp[0] % x;
    for (int val : temp)
    {
        if (val % x != rem)
            return -1;
    }
    sort(temp.begin(), temp.end());
    int median = temp[temp.size() / 2];
    int count = 0;
    for (int val : temp)
    {
        count += abs(val - median) / x;
    }
    return count;
}
int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << minOperation(grid, k);
    return 0;
}