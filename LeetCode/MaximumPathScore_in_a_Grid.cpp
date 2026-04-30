#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<vector<int>>& grid, int k) {
    int m = grid.size(), n = grid[0].size();
    
    // dp[i][j][c] = max score reaching (i,j) with cost c
    vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k+1, -1)));

    int startCost = (grid[0][0] == 0 ? 0 : 1);
    if(startCost > k) return -1;

    dp[0][0][startCost] = grid[0][0];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for(int c = 0; c <= k; c++) {
                if(dp[i][j][c] == -1) continue;

                // move right
                if(j + 1 < n) {
                    int newCost = c + (grid[i][j+1] == 0 ? 0 : 1);
                    if(newCost <= k) {
                        dp[i][j+1][newCost] = max(
                            dp[i][j+1][newCost],
                            dp[i][j][c] + grid[i][j+1]
                        );
                    }
                }

                // move down
                if(i + 1 < m) {
                    int newCost = c + (grid[i+1][j] == 0 ? 0 : 1);
                    if(newCost <= k) {
                        dp[i+1][j][newCost] = max(
                            dp[i+1][j][newCost],
                            dp[i][j][c] + grid[i+1][j]
                        );
                    }
                }
            }
        }
    }

    int ans = -1;
    for(int c = 0; c <= k; c++) {
        ans = max(ans, dp[m-1][n-1][c]);
    }

    return ans;
}

int main() {
    vector<vector<int>> grid = {
        {1,0,2},
        {1,2,0},
        {0,2,1}
    };
    int k = 1;

    cout << maxScore(grid, k); // Output: -1
}