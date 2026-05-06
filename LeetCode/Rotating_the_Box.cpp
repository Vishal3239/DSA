#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> rotateTheBox(vector<vector<char>> &BoxGrid)
{
    int m = BoxGrid.size();
    int n = BoxGrid[0].size();
    vector<vector<char>> ans(n, vector<char>(m, '.'));
    for (int i = m - 1; i >= 0; --i)
    {
        int pointer = n - 1;
        for (int j = n - 1; j >= 0; --j)
        {
            if (BoxGrid[i][j] == '*')
            {
                ans[j][(m - 1) - i] = '*';
                pointer = j - 1;
                continue;
            }
            else if (BoxGrid[i][j] == '#')
            {
                ans[pointer][(m - 1) - i] = '#';
                pointer--;
            }
        }
    }
    return ans;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<char>> BoxGrid(m, vector<char>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> BoxGrid[i][j];
        }
    }
    vector<vector<char>> ans = rotateTheBox(BoxGrid);
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}