#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        stack<char> st;
        unordered_set<char> us;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];

            if (us.count(ch))
                continue;

            string rest = s.substr(i + 1);

            while (!st.empty() && st.top() > ch && rest.find(st.top()) != string::npos)
            {
                us.erase(st.top());
                st.pop();
            }

            st.push(ch);
            us.insert(ch);
        }

        string ans = "";
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.removeDuplicateLetters(s);

    return 0;
}