#include <bits/stdc++.h>
using namespace std;
vector<int> maxValue(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return {};

    // Step 1: Har index tak ka maximum nikaalein (Prefix Max)
    vector<int> prefMax(n);
    prefMax[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefMax[i] = max(prefMax[i - 1], nums[i]);
    }

    // Step 2: Har index se end tak ka minimum nikaalein (Suffix Min)
    vector<int> suffMin(n);
    suffMin[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffMin[i] = min(suffMin[i + 1], nums[i]);
    }

    vector<int> ans(n);
    int start = 0;

    // Step 3: Connected components (blocks) identify karein
    for (int i = 0; i < n; i++)
    {
        // Agar current element prefixMax hai aur aage koi usse chota nahi
        // hai, toh ye block ka end hai.
        if (i == n - 1 || prefMax[i] <= suffMin[i + 1])
        {
            // Is block ke saare elements is block ke max tak pahunch sakte
            // hain
            int currentBlockMax = prefMax[i];
            for (int j = start; j <= i; j++)
            {
                ans[j] = currentBlockMax;
            }
            start = i + 1;
        }
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n), ans(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    ans = maxValue(nums);
    for(auto x:ans)
    cout<<x<<" ";

    return 0;
}