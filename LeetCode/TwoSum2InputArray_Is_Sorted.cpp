#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    for (int i = 0; i < n; i++)
    {
        int need = target - numbers[i];
        int low = i + 1;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (numbers[mid] == need)
            {
                return {i + 1, mid + 1};
            }
            if (numbers[mid] > need)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return {};
}
int main()
{
    int n, targate;
    cin >> n >> targate;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    vector<int> ans = twoSum(nums, targate);
    cout << ans[0] << " ";
    cout << ans[1];

    return 0;
}