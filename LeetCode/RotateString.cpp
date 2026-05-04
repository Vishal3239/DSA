#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
    string temp = s + s;
    int n = temp.length();
    int m = goal.length();
    if (m != s.length())
    {
        return false;
    }
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && temp[i + j] == goal[j])
        {
            j++;
        }
        if (j == m)
            return true;
    }
    return false;
}
int main()
{
    string s, goal;
    cin >> s >> goal;
    cout << rotateString(s, goal);

    return 0;
}