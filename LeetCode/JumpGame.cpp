#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int maxjump = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (i > maxjump)
            return false;
        maxjump = max(maxjump, i+nums[i]);
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << canJump(nums);
    return 0;
}