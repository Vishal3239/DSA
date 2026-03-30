#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == t)
        {
            cout << mid;
            return 0;
        }
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= t && t < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < t && t <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << "-1";
    return 0;
}