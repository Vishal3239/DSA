#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int n;
    int dp[2][102][102];
    int Alice(vector<int> &piles, int person, int i, int M)
    {
        if (i >= n)
            return 0;
        if (dp[person][i][M] != -1)
            return dp[person][i][M];
        int result = (person == 1) ? -1 : INT_MAX;
        int stone = 0;
        for (int x = 1; x <= min(2 * M, n - i); ++x)
        {
            stone += piles[i + x - 1];
            if (person == 1) // Alice turn
                result = max(result, stone + Alice(piles, 0, i + x, max(M, x)));
            else//bob turn
                result = min(result, Alice(piles, 1, i + x, max(M, x)));
        }
        return dp[person][i][M] = result;
    }
    int stoneGameII(vector<int> &piles)
    {
        n = piles.size();
        memset(dp, -1, sizeof(dp));
        return Alice(piles, 1, 0, 1);
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    Solution obj;
    cout << obj.stoneGameII(nums);

    return 0;
}