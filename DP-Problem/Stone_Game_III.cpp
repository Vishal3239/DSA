#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    vector<int> dp;

    int GainScore(vector<int>& stoneValue, int i) {
        if (i >= n)
            return 0;

        if (dp[i] != INT_MIN)
            return dp[i];

        int score = 0;
        int result = INT_MIN;

        for (int x = 1; x <= 3 && i + x - 1 < n; x++) {
            score += stoneValue[i + x - 1];

            result = max(result, score - GainScore(stoneValue, i + x));
        }

        return dp[i] = result;
    }

    string stoneGameIII(vector<int>& stoneValue) {
        n = stoneValue.size();
        dp.assign(n, INT_MIN);

        int diff = GainScore(stoneValue, 0);

        if (diff > 0)
            return "Alice";
        if (diff < 0)
            return "Bob";
        return "Tie";
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
    cout << obj.stoneGameIII(nums);

    return 0;
}