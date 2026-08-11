#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingInteger(vector<int> &nums)
    {
        int sum = nums[0];
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i - 1] + 1 == nums[i])
            {
                sum += nums[i];
            }
            else
            {
                break;
            }
        }
        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(sum))
        {
            sum++;
        }

        return sum;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    Solution obj;
    cout << obj.missingInteger(nums);

    return 0;
}