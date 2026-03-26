#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // set<int> s(nums.begin(), nums.end());

    // for(int i = 1; i <= n; i++){
    //     if(s.find(i) == s.end()){
    //         cout << i << " ";
    //     }
    // }

    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= n)
            freq[nums[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            cout << i << " ";
        }
    }
}