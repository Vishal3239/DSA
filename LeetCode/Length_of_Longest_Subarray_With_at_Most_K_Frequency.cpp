#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        int left = 0;
        int maxLen = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            freq[nums[right]]++;
            while (freq[nums[right]] > k)
            {
                freq[nums[left]]--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    Solution vishal;
    cout<<vishal.maxSubarrayLength(nums,k);

    return 0;
}