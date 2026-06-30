#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> mp;
        int l = 0;
        int maxFruit = 0;

        for (int r = 0; r < fruits.size(); r++)
        {
            mp[fruits[r]]++;

            while (mp.size() > 2)
            {
                mp[fruits[l]]--;

                if (mp[fruits[l]] == 0)
                    mp.erase(fruits[l]);

                l++;
            }

            maxFruit = max(maxFruit, r - l + 1);
        }

        return maxFruit;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    Solution obj;
    cout << obj.totalFruit(nums);

    return 0;
}