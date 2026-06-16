#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
void solve(int indx, string &s, string ans)
{
    if (indx == s.size())
    {
        st.insert(ans);
        return;
    }
    solve(indx+1,s,ans+s[indx]);
    solve(indx+1,s,ans);
    
    
}

int main()
{
    string s;
    cin >> s;
    solve(0, s, "");
    for(auto x:st)
    cout<<x<<" ";

    return 0;
}