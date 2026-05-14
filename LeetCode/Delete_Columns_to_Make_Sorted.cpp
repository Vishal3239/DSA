#include <bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string> &strs)
{
    int n = strs.size();
    string m = strs[0];
    int strSize = m.length();
    vector<char> cmp(strSize, 'a');
    int Delete = 0;
    vector<int> ignore(strSize, -1);
    for (int i = 0; i < n; ++i)
    {
        string temp = strs[i];
        for (int j = 0; j < strSize; ++j)
        {
            if (ignore[j] == j)
                continue;
            else if (temp[j] >= cmp[j])
            {
                cmp[j] = temp[j];
            }
            else
            {
                Delete++;
                ignore[j] = j;
            }
        }
    }
    return Delete;
}
int main()
{
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; ++i)
        cin >> strs[i];
    cout << minDeletionSize(strs);

    return 0;
}