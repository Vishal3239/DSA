#include <bits/stdc++.h>
using namespace std;

bool targetSum(vector<int> &nums)
{
    int totelSum = 0;
    int n = nums.size();
    for (auto x : nums)
    {
        totelSum += x;
    }
    if (totelSum % 2 != 0) return false;
    int target = totelSum / 2;
    bool dp[n + 1][target + 1];
    for (int i = 0; i < n+1; ++i)
    {
        dp[i][0] = true;
    }
    for (int i = 1; i <= target; ++i)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < target+1; j++)
        {
            if (nums[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][target];
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    cout << targetSum(nums);

    return 0;
}