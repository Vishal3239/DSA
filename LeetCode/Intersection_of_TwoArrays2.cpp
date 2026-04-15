#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m1;
    vector<int> ans;
    for (int x : nums1)
    {
        m1[x]++;
    }
    for (int x : nums2)
    {
        if (m1[x] > 0)
        {
            ans.push_back(x);
            m1[x]--;
        }
    }

    return ans;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1), nums2(n2), ans;
    for (int i = 0; i < n1; ++i)
        cin >> nums1[i];
    for (int i = 0; i < n2; ++i)
        cin >> nums2[i];
    ans = intersection(nums1, nums2);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}