#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
    string temp = s + s;
    int j = 0;
    bool flag = true;
    for (int i = 0; i < temp.size(); ++i)
    {
        if (j != goal.size())
        {
            if (temp[i] == goal[j])
            {
                flag = false;
                j++;
            }
            else
            {
                flag = true;
            }
        }
    }
    if (flag)
        return false;
    else
        return true;
}
int main()
{
    string s, goal;
    cin >> s >> goal;
    cout << rotateString(s, goal);

    return 0;
}