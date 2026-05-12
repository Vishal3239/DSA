#include <bits/stdc++.h>
using namespace std;
int ThirdMaxNum(vector<int> &nums)
{
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int i = 0; i < nums.size(); ++i)
    {
        first = max(first, (long long)nums[i]);
    }
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == first)
            continue;
        second = max(second, (long long)nums[i]);
    }
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == first || nums[i] == second)
            continue;
        third = max(third, (long long)nums[i]);
    }
    return (third == LLONG_MIN) ? first : third;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    cout << ThirdMaxNum(nums);

    return 0;
}