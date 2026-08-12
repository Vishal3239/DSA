#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reductionOperations(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int count = 0;
        int n = *min_element(nums.begin(), nums.end());
        
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    Solution obj;
    cout<<obj.reductionOperations(nums);
    return 0;
}