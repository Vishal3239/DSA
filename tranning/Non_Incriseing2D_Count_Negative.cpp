#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int i = 0;
    int j = n - 1;
    int count = 0;

    while (i < m && j >= 0)
    {
        if (arr[i][j] < 0)
        {
            count += (m - i);
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << count;
}