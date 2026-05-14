#include <bits/stdc++.h>
using namespace std;
int countNegatives(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    int i = 0;
    int j = n - 1;
    int countNegative = 0;
    while (m > i)
    {
        if (grid[i][j] < 0)
        {
            countNegative += m - i;
            j--;
        }
        else
        {
            i++;
        }
    }
    return countNegative;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> nums(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> nums[i][j];
        }
    }
    cout << countNegatives(nums);

    return 0;
}