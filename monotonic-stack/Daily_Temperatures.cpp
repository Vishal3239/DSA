#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> st;
        vector<int> ans(temperatures.size(), 0);
        for (int i = temperatures.size() - 1; i >= 0; --i)
        {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
            {
                st.pop();
            }

            if(!st.empty())
            ans[i]=st.top()-i;

            st.push(i);
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    Solution obj;
    ans = obj.dailyTemperatures(arr);
    for (auto x : ans)
        cout << x << " ";

    return 0;
}