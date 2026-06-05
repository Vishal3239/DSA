#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct Node {
        long long cnt;
        long long wav;
    };

    string s;

    Node dp[20][11][11][20][2];
    bool vis[20][11][11][20][2];

    Node solveDP(int pos,
                 int prev1,
                 int prev2,
                 int len,
                 bool tight) {

        if (pos == (int)s.size()) {
            return {1, 0};
        }

        if (!tight && vis[pos][prev1][prev2][len][0])
            return dp[pos][prev1][prev2][len][0];

        int limit = tight ? (s[pos] - '0') : 9;

        long long totalCnt = 0;
        long long totalWav = 0;

        for (int d = 0; d <= limit; d++) {

            bool ntight = tight && (d == limit);

            // still leading zeros
            if (len == 0 && d == 0) {
                Node nxt = solveDP(pos + 1, 10, 10, 0, ntight);

                totalCnt += nxt.cnt;
                totalWav += nxt.wav;
            }
            else {

                int add = 0;

                if (len >= 2) {
                    if ((prev1 > prev2 && prev1 > d) ||
                        (prev1 < prev2 && prev1 < d))
                        add = 1;
                }

                int nprev2, nprev1;

                if (len == 0) {
                    nprev2 = 10;
                    nprev1 = d;
                }
                else if (len == 1) {
                    nprev2 = prev1;
                    nprev1 = d;
                }
                else {
                    nprev2 = prev1;
                    nprev1 = d;
                }

                Node nxt = solveDP(
                    pos + 1,
                    nprev1,
                    nprev2,
                    len + 1,
                    ntight
                );

                totalCnt += nxt.cnt;
                totalWav += nxt.wav + 1LL * add * nxt.cnt;
            }
        }

        Node ans = {totalCnt, totalWav};

        if (!tight) {
            vis[pos][prev1][prev2][len][0] = true;
            dp[pos][prev1][prev2][len][0] = ans;
        }

        return ans;
    }

    long long F(long long n) {
        if (n < 0) return 0;

        s = to_string(n);
        memset(vis, 0, sizeof(vis));

        Node res = solveDP(0, 10, 10, 0, true);
        return res.wav;
    }

    long long totalWaviness(long long num1, long long num2) {
        return F(num2) - F(num1 - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long num1, num2;
    cin >> num1 >> num2;

    Solution sol;
    cout << sol.totalWaviness(num1, num2) << "\n";

    return 0;
}