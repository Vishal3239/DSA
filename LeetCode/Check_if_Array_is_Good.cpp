#include <bits/stdc++.h>
using namespace std;
bool isGood(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int max = nums[n - 1];
    vector<int> cmp;
    for (int i = 1; i <= max; ++i)
    {
        cmp.push_back(i);
    }
    cmp.push_back(max);
    if (nums == cmp)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << isGood(nums);

    return 0;
}