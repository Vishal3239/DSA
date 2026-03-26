#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int>ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    int j = 0;
    while (n > 0)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {

            if (nums[j] > nums[i])
                count++;
        }
        ans.push_back(count);
        j++;
        n--;
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
}