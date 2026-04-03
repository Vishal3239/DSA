#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    long long option1 = 1LL * nums[n-1] * nums[n-2] * nums[n-3];
    long long option2 = 1LL * nums[0] * nums[1] * nums[n-1];

    cout << "Maximum Product: " << max(option1, option2);

    return 0;
}