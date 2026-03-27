#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int j = 0;
    int count = 0;
    while (n > 0)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (i < j && nums[i] > nums[j])
            {
                count++;
            }
        }
        j++;
        n--;
    }

    cout << count;
}