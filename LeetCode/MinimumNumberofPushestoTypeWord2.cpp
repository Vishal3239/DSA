#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumPushes(string word)
    {

        vector<int> freq(26, 0);

        for (char ch : word)
            freq[ch - 'a']++;

        vector<int> v;

        for (int x : freq)
            if (x > 0)
                v.push_back(x);

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;

        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i] * ((i / 8) + 1);
        }

        return ans;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.minimumPushes(s);

    return 0;
}