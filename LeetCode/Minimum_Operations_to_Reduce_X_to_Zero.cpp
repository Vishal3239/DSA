#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();

        int total = 0;
        for (int num : nums) {
            total += num;
        }

        int target = total - x;

        // Agar target negative hai,
        // to possible hi nahi hai
        if (target < 0)
            return -1;

        // target = 0
        // Matlab pura array remove karna hai
        if (target == 0)
            return n;

        int left = 0;
        int sum = 0;
        int maxLen = -1;

        for (int right = 0; right < n; right++) {

            sum += nums[right];

            while (sum > target && left <= right) {
                sum -= nums[left];
                left++;
            }

            if (sum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        if (maxLen == -1)
            return -1;

        return n - maxLen;
    }
};


int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    Solution obj;
    cout << obj.minOperations(nums, x);

    return 0;
}