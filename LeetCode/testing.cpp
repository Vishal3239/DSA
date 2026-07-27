#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int m, int n)
{
  return i >= 0 && j >= 0 && i < m && j < n;
}

vector<pair<int, int>> dir = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int orang(vector<vector<int>> &grid)
{
  queue<pair<int, int>> q;
  int m = grid.size();
  int n = grid[0].size();
  int fresh = 0;
  int time = 0;

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; ++j)
    {
      if (grid[i][j] == 2)
      {
        q.push({i, j});
      }
      if (grid[i][j] == 1)
        fresh++;
    }
  }
  if (fresh == 0)
    return 0;
  while (!q.empty() && fresh > 0)
  {
    int s = q.size();

    while (s--)
    {
      pair<int, int> v = q.front();
      q.pop();
      int x = v.first;
      int y = v.second;
      for (auto z : dir)
      {
        int nx = x + z.first;
        int ny = y + z.second;
        if (!isValid(nx, ny, m, n))
          continue;

        if (grid[nx][ny] != 1)
          continue;
        grid[nx][ny] = 2;
        fresh--;
        q.push({nx, ny});
      }
    }
    time++;
  }
  return fresh > 0 ? -1 : time;
}
int main()
{
  int m, n;
  cin >> m >> n;
  vector<vector<int>> arr(m, vector<int>(n));
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> arr[i][j];
    }
  }
  cout << orang(arr);

  return 0;
}