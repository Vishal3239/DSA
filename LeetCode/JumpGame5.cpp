#include <bits/stdc++.h>
using namespace std;

int n, d;
vector<int> arr;
vector<int> dp;

int solve(int i) {
    // Agar pehle calculate kar chuke hain
    if (dp[i] != -1) return dp[i];
    
    dp[i] = 1; // sirf apne aap ko count karo

    // Right side jump karo
    for (int x = 1; x <= d; x++) {
        int j = i + x;
        if (j >= n) break;          // array ke bahar mat jao
        if (arr[j] >= arr[i]) break; // beech mein bada element mila, ruko
        dp[i] = max(dp[i], 1 + solve(j));
    }

    // Left side jump karo
    for (int x = 1; x <= d; x++) {
        int j = i - x;
        if (j < 0) break;           // array ke bahar mat jao
        if (arr[j] >= arr[i]) break; // beech mein bada element mila, ruko
        dp[i] = max(dp[i], 1 + solve(j));
    }

    return dp[i];
}

int maxJumps(vector<int>& arr_, int d_) {
    arr = arr_;
    n = arr.size();
    d = d_;
    dp.assign(n, -1);

    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans = max(ans, solve(i)); // har index se try karo
    }
    return ans;
}

int main() {
    vector<int> arr = {6,4,14,6,8,13,9,7,10,6,12};
    int d = 2;
    cout << maxJumps(arr, d) << endl; // Output: 4
    return 0;
}