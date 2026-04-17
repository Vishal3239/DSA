#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int minMirrorPairDistance(vector<int> &nums)
{
    unordered_map<int, int> mp; // reversed value -> latest index
    int ans = INT_MAX;

    for (int j = 0; j < nums.size(); j++)
    {

        // agar koi i < j exist karta hai
        if (mp.count(nums[j]))
        {
            ans = min(ans, j - mp[nums[j]]);
        }

        // update latest index
        mp[reverseNum(nums[j])] = j;
    }

    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    vector<int> nums = {12, 21, 45, 33, 54};
    cout << minMirrorPairDistance(nums);
}