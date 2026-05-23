#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mp, mp1;
    for (int i = 0; i < s.length(); ++i)
    {
        if (mp.count(s[i]) && mp[s[i]] != t[i])
            return false;
        if (mp1.count(t[i]) && mp1[t[i]] != s[i])
            return false;
        mp[s[i]] = t[i];
        mp1[t[i]] = s[i];
    }
    return true;
}
int main()
{
    string s, t;
    cin >> s >> t;
    cout << isIsomorphic(s, t);

    return 0;
}