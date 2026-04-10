#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n + 1);

    ans[0] = 0;

    for(int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }

    return ans;
}

int main() {
    int n = 5;
    vector<int> result = countBits(n);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}