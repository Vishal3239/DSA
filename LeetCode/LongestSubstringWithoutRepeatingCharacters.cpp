#include <bits/stdc++.h>
using namespace std;
int longSubStr(string s)
{
    unordered_set<char> st;

    int left = 0;
    int maxlen = 0;

    for (int right = 0; right < s.length(); ++right)
    {

        while (st.count(s[right]))
        {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);

        maxlen = max(maxlen, right - left + 1);
    }

    return maxlen;
}

int main()
{
    string str;
    cin >> str;
    cout << longSubStr(str);

    return 0;
}