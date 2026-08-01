#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> dp;
    int solve(int i, int j, vector<int> &nums)
    {
        if (i > j)
            return 0;
        if (i == j)
            return nums[i];
        if (dp[i][j] != -1)
            return dp[i][j];
        int take_i = nums[i] + min(solve(i + 2, j, nums), solve(i + 1, j - 1, nums));
        int take_j = nums[j] + min(solve(i + 1, j - 1, nums), solve(i, j - 2, nums));
        return dp[i][j] = max(take_i, take_j);
    }
    bool predictTheWinner(vector<int> &nums)
    {
        int n = nums.size() - 1;
        dp.assign(23, vector<int>(23, -1));
        int totalSum = 0;
        for (int x : nums)
            totalSum += x;
        int p1 = solve(0, n, nums);
        int p2 = totalSum - p1;
        return p1 >= p2;
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
    cout << obj.predictTheWinner(nums);

    return 0;
}