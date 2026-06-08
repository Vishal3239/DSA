#include <bits/stdc++.h>
using namespace std;
vector<int> pivotArray(vector<int> &nums, int pivot)
{
    vector<int> temp, ans;
    int count = 0;
    for (auto x : nums)
    {
        if (x == pivot)
        {
            count++;
        }
        if (x < pivot)
            temp.push_back(x);
    }
    while (count--)
    {
        temp.push_back(pivot);
    }
    ans = temp;
    for (auto x : nums)
    {
        if (x > pivot)
        {
            ans.push_back(x);
        }
    }
    return ans;
}
int main()
{
    int n, pivot;
    cin >> n >> pivot;
    vector<int> nums(n), ans;
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    ans = pivotArray(nums, pivot);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}