#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;

    // Step 1: total sum nikal lo
    for (int x : nums) {
        totalSum += x;
    }

    int leftSum = 0;

    // Step 2: har index check karo
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            return i;  
        }

        leftSum += nums[i];
    }

    return -1;  
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = pivotIndex(nums);
    cout << ans << endl;

    return 0;
}