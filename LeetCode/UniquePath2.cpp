#include <bits/stdc++.h>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();

    
    if(obstacleGrid[0][0] == 1) return 0;

    vector<vector<int>> ans(m, vector<int>(n, 0));
    ans[0][0] = 1;

    for (int j = 1; j < n; j++)
    {
        if (obstacleGrid[0][j] == 0)
            ans[0][j] = ans[0][j - 1];
    }

    
    for (int i = 1; i < m; i++)
    {
        if (obstacleGrid[i][0] == 0)
            ans[i][0] = ans[i - 1][0];
    }


    for (int i = 1; i < m; ++i)
    {
        for (int j = 1; j < n; j++)
        {
            if (obstacleGrid[i][j] == 0)
            {
                ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
            }
        }
    }

    return ans[m - 1][n - 1];

}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> obstacleGrid(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> obstacleGrid[i][j];
        }
    }
    cout << uniquePathsWithObstacles(obstacleGrid);
    return 0;
}