#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // string smallestPalindrome(string s)
    // {
    //     string ans = "";
    //     int n = s.size();
    //     string temp = "";
    //     if (n == 1)
    //         return s;
    //     priority_queue<
    //         char,
    //         vector<char>,
    //         greater<char>>
    //         p1, p2;
    //     string str = "";
    //     string str1 = "";
    //     if (n % 2 == 0)
    //     {
    //         str = s.substr(0, (n / 2));
    //         str1 = s.substr(n / 2);
    //         for (char ch : str)
    //         {
    //             p1.push(ch);
    //         }
    //         for (char ch : str1)
    //         {
    //             p2.push(ch);
    //         }
    //     }
    //     else
    //     {
    //         str = s.substr(0, (n / 2));
    //         str1 = s.substr((n / 2) + 1);
    //         temp = s[n / 2];
    //         for (char ch : str)
    //         {
    //             p1.push(ch);
    //         }
    //         for (char ch : str1)
    //         {
    //             p2.push(ch);
    //         }
    //     }
    //     if (n % 2 == 0)
    //     {
    //         string s1 = "";
    //         string s2 = "";
    //         while (!p1.empty())
    //         {
    //             s1 += p1.top();
    //             p1.pop();
    //         }
    //         while (!p2.empty())
    //         {
    //             s2 += p2.top();
    //             p2.pop();
    //         }
    //         reverse(s2.begin(), s2.end());
    //         ans = s1 + s2;
    //     }
    //     else
    //     {
    //         string s1 = "";
    //         string s2 = "";
    //         while (!p1.empty())
    //         {
    //             s1 += p1.top();
    //             p1.pop();
    //         }
    //         while (!p2.empty())
    //         {
    //             s2 += p2.top();
    //             p2.pop();
    //         }
    //         reverse(s2.begin(), s2.end());
    //         ans = s1 + temp + s2;
    //     }
    //     return ans;
    // }
    string smallestPalindrome(string s)
    {
        vector<int> freq(26);

        for (char c : s)
            freq[c - 'a']++;

        string left = "";
        string mid = "";

        for (int i = 0; i < 26; i++)
        {
            left += string(freq[i] / 2, 'a' + i);

            if (freq[i] % 2)
                mid = char('a' + i);
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.smallestPalindrome(s);

    return 0;
}