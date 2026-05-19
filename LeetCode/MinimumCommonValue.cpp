#include <bits/stdc++.h>
using namespace std;
int minimumCommon(vector<int> &num1, vector<int> &num2)
{

    for (int i = 0; i < num1.size(); ++i)
    {
        int key = num1[i];
        int left = 0;
        int right = num2.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (num2[mid] == key)
            {
                return key;
            }
            if (num2[mid] > key)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> num1(m), num2(n);
    for (int i = 0; i < m; ++i)
        cin >> num1[i];
    for (int i = 0; i < n; ++i)
        cin >> num2[i];
    cout << minimumCommon(num1, num2);
    return 0;
}