#include <bits/stdc++.h>
using namespace std;
vector<long long> distance(vector<int> &nums)
{
    vector<long long> ans(nums.size(), 0);
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < nums.size(); ++i)
    {
        mp[nums[i]].push_back(i);
    }
    // Step 2: process each group
    for (auto &it : mp)
    {
        vector<int> &v = it.second;
        int k = v.size();

        // prefix sum
        vector<long long> prefix(k);
        prefix[0] = v[0];
        for (int i = 1; i < k; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }

        for (int j = 0; j < k; j++)
        {
            long long idx = v[j];

            // left
            long long left = idx * j - (j > 0 ? prefix[j - 1] : 0);

            // right
            long long right = (prefix[k - 1] - prefix[j]) - idx * (k - j - 1);

            ans[idx] = left + right;
        }
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    vector<long long> ans = distance(arr);
    for(auto x:ans)
    cout<<x<<" ";

    return 0;
}