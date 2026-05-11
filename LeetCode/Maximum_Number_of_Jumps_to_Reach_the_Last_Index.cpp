#include <bits/stdc++.h>
using namespace std;
int maximumJumps(vector<int> &nums, int target)
{
    
    int n = nums.size();
    int jump = 0;

    int i = 0;

    while (i < n - 1)
    {
        bool found = false;

        // piche se check karo
        for (int j = n - 1; j > i; j--)
        {
            if (-target <= nums[j] - nums[i] &&
                nums[j] - nums[i] <= target)
            {
                jump++;
                i = j;
                found = true;
                break;
            }
        }

        if (!found)
            return -1;
    }

    return jump;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    cout << maximumJumps(nums, k);
    return 0;
}