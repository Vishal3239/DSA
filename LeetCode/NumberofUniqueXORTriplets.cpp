#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uniqueXorTriplets(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 2)
            return n;
        int b = 0;
        while (1 << b <= n)
            b++;
        return 1 << b;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    Solution obj;
    cout << obj.uniqueXorTriplets(nums);
    return 0;
}