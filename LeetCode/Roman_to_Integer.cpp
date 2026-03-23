#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int sum = 0;
    // MCMXCIV
    string s;
    cin >> s;
    int j = 0;
    for (int i = j + 1; i <= s.size(); i++)
    {
        // if (s[j] == 'I' && s[i] == 'V' || s[j] == 'I' && s[i] == 'X' ||
        //     s[j] == 'X' && s[i] == 'L' || s[j] == 'X' && s[i] == 'C' ||
        //     s[j] == 'C' && s[i] == 'D' || s[j] == 'C' && s[i] == 'M')
        // {
        //     sum += m[s[i]] - m[s[j]]; // 900+1000+90+4
        //     j += 1;
        //     i = j + 1;
        // }
        // else
        // {
        //     sum += m[s[j]];
        // }
        // j++;

        
    }
    for(int i=0;i<s.size();i++){
            if(i+1<s.size() && m[s[i]] < m[s[i+1]])
                sum -= m[s[i]];
            else
                sum += m[s[i]];
        }
    cout << endl
         << sum;
}