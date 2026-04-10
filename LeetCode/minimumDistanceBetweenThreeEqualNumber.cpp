#include <bits/stdc++.h>
using namespace std;

int minimumDistance(vector<int>& nums) {
    unordered_map<int, vector<int>> mp;

    // store indices
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }

    int ans = INT_MAX;

    // check for each value
    for (auto &it : mp) {
        vector<int> &v = it.second;

        // need at least 3 indices
        if (v.size() < 3) continue;

        // check consecutive triples
        for (int i = 0; i + 2 < v.size(); i++) {
            int dist = 2 * (v[i + 2] - v[i]);
            ans = min(ans, dist);
        }
    }

    return ans == INT_MAX ? -1 : ans;
}

int main() {
    vector<int> nums = {1,2,1,1,3};
    cout << minimumDistance(nums);
    return 0;
}