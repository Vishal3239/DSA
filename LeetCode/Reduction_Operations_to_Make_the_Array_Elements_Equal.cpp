#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reductionOperations(vector<int> &nums)
    {
        int n = nums.size();
        int operation = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; ++i)
        {
            operation += n - i;
        }
        return operation;
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
    cout << obj.reductionOperations(nums);

    return 0;
}