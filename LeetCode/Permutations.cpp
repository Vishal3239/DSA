#include <bits/stdc++.h>
using namespace std;

void solve(int idx, vector<int> &nums, vector<vector<int>> &ans)
{
    if (idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[idx], nums[i]); // choose

        solve(idx + 1, nums, ans); // explore

        swap(nums[idx], nums[i]); // backtrack
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;

    solve(0, nums, ans);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    vector<vector<int>> ans;
    ans = permute(nums);

    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < ans[0].size(); ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}