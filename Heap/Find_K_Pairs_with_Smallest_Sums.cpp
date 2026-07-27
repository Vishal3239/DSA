#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> ans;
        if (nums1.empty() || nums2.empty())
            return ans;

        int n1 = nums1.size();

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        for (int i = 0; i < min(n1, k); i++)
        {
            pq.push({nums1[i] + nums2[0], i, 0});
        }

        while (k-- > 0 && !pq.empty())
        {
            vector<int> top = pq.top();
            pq.pop();

            int i = top[1], j = top[2];
            ans.push_back({nums1[i], nums2[j]});

            if (j + 1 < (int)nums2.size())
            {
                pq.push({nums1[i] + nums2[j + 1], i, j + 1});
            }
        }

        return ans;
    }
};
int main()
{
    vector<int> nums1 = {1, 7, 11};
    vector<int> nums2 = {2, 4, 6};
    int k = 3;
    Solution obj;
    vector<vector<int>> ans(k, vector<int>(2));
    ans = obj.kSmallestPairs(nums1, nums2, k);
    for (auto x : ans)
    {
        cout << x[0] << " " << x[1] << endl;
    }
    return 0;
}