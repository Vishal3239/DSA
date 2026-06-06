#include <bits/stdc++.h>
using namespace std;
vector<int> leftRightDifference(vector<int> &nums)
{
    vector<int> leftSum(nums.size(), 0), rightSum(nums.size(), 0), ans;
    for (int i = 0; i < nums.size() - 1; ++i)
    {
        leftSum[i + 1] = leftSum[i] + nums[i];
    }
    for (int i = nums.size() - 1; i >= 1; --i)
    {
        rightSum[i - 1] = rightSum[i] + nums[i];
    }
    for (int i = 0; i < rightSum.size(); ++i)
        ans.push_back(abs(leftSum[i] - rightSum[i]));
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> num(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    ans = leftRightDifference(num);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}