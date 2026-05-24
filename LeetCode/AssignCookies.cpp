#include <bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int child = 0;
    int cookie = 0;

    while (child < g.size() && cookie < s.size())
    {

        if (s[cookie] >= g[child])
        {
            child++;
        }

        cookie++;
    }

    return child;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> g(m), s(n);
    for (int i = 0; i < m; ++i)
        cin >> g[i];

    for (int i = 0; i < n; ++i)
        cin >> s[i];
    cout << findContentChildren(g, s);

    return 0;
}