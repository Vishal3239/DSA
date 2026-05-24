#include <bits/stdc++.h>
using namespace std;
vector<string> findRelativeRanks(vector<int> &score)
{
    int n = score.size();
    unordered_map<int, string> mp;
    vector<int> temp = score;
    vector<string> ans;
    sort(temp.begin(), temp.end());
    if (n >= 1)
        mp[temp[n - 1]] = "Gold Medal";
    if (n >= 2)
        mp[temp[n - 2]] = "Silver Medal";
    if (n >= 3)
        mp[temp[n - 3]] = "Bronze Medal";

    for (int i = n - 4; i >= 0; --i)
    {
        mp[temp[i]] = to_string(n-i);
    }
    for (auto x : score)
    {
        if (mp.count(x))
        {
            ans.push_back(mp[x]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> score(n);
    for (int i = 0; i < n; ++i)
        cin >> score[i];
    vector<string> ans;
    ans = findRelativeRanks(score);
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}