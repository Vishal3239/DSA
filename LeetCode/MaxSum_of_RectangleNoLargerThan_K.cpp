#include <bits/stdc++.h>
using namespace std;
int maxSumSubmatrix(vector<vector<int>> &matrix, int k)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int ans = INT_MIN;

    for (int top = 0; top < m; top++)
    {
        vector<int> colSum(n, 0);

        for (int bottom = top; bottom < m; bottom++)
        {

            for (int c = 0; c < n; c++)
            {
                colSum[c] += matrix[bottom][c];
            }

            set<int> s;
            s.insert(0);

            int prefix = 0;

            for (int x : colSum)
            {
                prefix += x;

                auto it = s.lower_bound(prefix - k);

                if (it != s.end())
                {
                    ans = max(ans, prefix - *it);
                }

                s.insert(prefix);
            }
        }
    }

    return ans;
}
int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    cout << maxSumSubmatrix(matrix, k);

    return 0;
}