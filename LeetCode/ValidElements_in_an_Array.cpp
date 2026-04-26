#include <bits/stdc++.h>
using namespace std;
vector<int> findValidElements(vector<int> &nums)
{
    int n = nums.size();
    vector<int> leftMax(n), rightMax(n);

    leftMax[0] = nums[0];
    for (int i = 1; i < n; ++i)
    {
        leftMax[i] = max(leftMax[i - 1], nums[i]);
    }
    rightMax[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        rightMax[i] = max(rightMax[i + 1], nums[i]);
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0 || i == n - 1 || nums[i] > leftMax[i - 1] || nums[i] > rightMax[i + 1])
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    cin >> nums[i];
    vector<int>ans=findValidElements(nums);
    for(auto x:ans)
    cout<<x<<" ";

    return 0;
}