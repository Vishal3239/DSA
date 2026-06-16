#include <bits/stdc++.h>
using namespace std;
string processStr(string s)
{
    int i = 0;
    while (i < s.size() && !isalpha(s[i]))
    {
        i++;
    }

    s = s.substr(i);

    string ans = "";
    for (char ch : s)
    {
        if (ch == '#')
        {
            ans += ans;
            continue;
        }
        if (ch == '%')
        {
            reverse(ans.begin(), ans.end());
            continue;
        }
        if (ch == '*')
        {
            if (ans.size() > 0)
                ans.pop_back();
            continue;
        }
        ans += ch;
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << processStr(s);

    return 0;
}