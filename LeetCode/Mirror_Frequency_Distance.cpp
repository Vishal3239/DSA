#include <bits/stdc++.h>
using namespace std;
int mirrorFrequency(string s)
{
    vector<int> freq(128, 0);

    // Step 1: frequency count
    for (char c : s)
    {
        freq[c]++;
    }

    int ans = 0;

    // Step 2: only 'a' to 'z' handle
    for (char c = 'a'; c <= 'z'; c++)
    {
        char mirror = 'a' + ('z' - c);

        if (c <= mirror)
        { // avoid double counting
            ans += abs(freq[c] - freq[mirror]);
        }
    }

    // Step 3: digits (0–9)
    for (char c = '0'; c <= '9'; c++)
    {
        char mirror = '0' + ('9' - c);

        if (c <= mirror)
        {
            ans += abs(freq[c] - freq[mirror]);
        }
    }

    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << mirrorFrequency(s);
    return 0;
}