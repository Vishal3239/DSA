#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();

        stack<int> st;
        vector<int> ans(n, 0);

        for (int i = n - 1; i >= 0; --i)
        {

            while (!st.empty() &&
                   temperatures[st.top()] <= temperatures[i])
            {
                st.pop();
            }

            if (!st.empty())
            {
                ans[i] = st.top() - i;
            }

            st.push(i);
        }

        return ans;
    }

    void Display(vector<int> &ans)
    {
        for (auto x : ans)
            cout << x << " ";
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n), ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    Solution obj;
    ans = obj.dailyTemperatures(nums);
    obj.Display(ans);

    return 0;
}