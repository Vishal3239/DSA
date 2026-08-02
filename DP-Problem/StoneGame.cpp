#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int playGame(int i, int j, vector<int> &stone)
    {
        if (i > j)
            return 0;
        int take_i = stone[i] + min(playGame(i + 2, j, stone), playGame(i + 1, j - 1, stone));
        int take_j = stone[j] + min(playGame(i + i, j - 1, stone), playGame(i, j - 2, stone));
        return max(take_i, take_j);
    }
    bool stoneGame(vector<int> &piles)
    {
        int n = piles.size() - 1;
        int total_Sum = 0;
        for (int x : piles)
            total_Sum += x;
        int Alice = playGame(0, n, piles);
        int Bob = total_Sum - Alice;
        return Alice > Bob;
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
    cout << obj.stoneGame(nums);

    return 0;
}