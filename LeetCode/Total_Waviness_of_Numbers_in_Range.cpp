#include <bits/stdc++.h>
using namespace std;
int totalWaviness(int num1, int num2)
{
    int count = 0;
    for (int i = num1; i <= num2; ++i)
    {
        string s = to_string(i);
        int n = s.size();
        for (int j = 0; j < n - 2; j++)
        {
            if ((s[j] < s[j + 1] && s[j + 1] > s[j + 2]) || (s[j] > s[j + 1] && s[j + 1] < s[j + 2]))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << totalWaviness(num1, num2);
    return 0;
}