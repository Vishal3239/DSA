#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int stoneGameVI(vector<int> &aliceValues, vector<int> &bobValues)
    {
        vector<pair<int, int>> temp;
        for (int i = 0; i < aliceValues.size(); ++i)
        {
            temp.push_back({aliceValues[i] + bobValues[i], i});
        }
        sort(temp.begin(), temp.end(), greater<pair<int, int>>());
        int Alice = 0;
        int Bob = 0;
        for (int i = 0; i < temp.size(); ++i)
        {
            if (i % 2 == 0)
                Alice += aliceValues[temp[i].second];
            else
                Bob += bobValues[temp[i].second];
        }
        if (Alice > Bob)
            return 1;
        else if (Bob > Alice)
            return -1;
        else
            return 0;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> AliceNums(n), BobNums(n);
    for (int i = 0; i < n; ++i)
        cin >> AliceNums[i];
    for (int i = 0; i < n; ++i)
        cin >> BobNums[i];
    Solution obj;
    cout << obj.stoneGameVI(AliceNums, BobNums);

    return 0;
}