#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        string str = "";
        for (char ch : s)
        {
            if (ch != '-')
                str += toupper(ch);
        }

        int n = str.size();
        if (n == 0)
            return "";

        string ans = "";
        int firstGroup = n % k;
        if (firstGroup == 0)
            firstGroup = k;

        int i = 0;
        ans += str.substr(0, firstGroup);
        i = firstGroup;

        while (i < n)
        {
            ans += "-";
            ans += str.substr(i, k);
            i += k;
        }

        return ans;
    }
};
int main()
{
    string s;
    int k;
    cin >> s >> k;
    Solution obj;
    cout << obj.licenseKeyFormatting(s, k);

    return 0;
}