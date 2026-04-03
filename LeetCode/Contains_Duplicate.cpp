#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_set<int> s;

    for(auto x : nums) {
        if(s.count(x)) {
            cout << "Contains Duplicate";
            return 0;
        }
        s.insert(x);
    }

    cout << "No Duplicate";
    return 0;
}