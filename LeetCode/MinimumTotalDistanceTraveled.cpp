#include<bits/stdc++.h>
using namespace std;

long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
    sort(robot.begin(), robot.end());
    sort(factory.begin(), factory.end());

    int n = robot.size();
    
    vector<long long> dp(n + 1, LLONG_MAX);
    dp[0] = 0;

    for (auto &f : factory) {
        int pos = f[0];
        int limit = f[1];

        vector<long long> new_dp = dp;

        for (int i = 1; i <= n; i++) {
            long long cost = 0;

            // try assigning k robots to this factory
            for (int k = 1; k <= limit && i - k >= 0; k++) {
                cost += abs(robot[i - k] - pos);

                if (dp[i - k] != LLONG_MAX) {
                    new_dp[i] = min(new_dp[i], dp[i - k] + cost);
                }
            }
        }

        dp = new_dp;
    }

    return dp[n];
}

int main() {
    int rSize;
    cin >> rSize;
    vector<int> robot(rSize);

    int factSize;
    cin >> factSize;
    vector<vector<int>> factory(factSize, vector<int>(2));

    for (int i = 0; i < rSize; i++)
        cin >> robot[i];

    for (int i = 0; i < factSize; i++) {
        cin >> factory[i][0] >> factory[i][1];
    }

    cout << minimumTotalDistance(robot, factory);
    return 0;
}