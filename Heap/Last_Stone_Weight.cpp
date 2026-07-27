#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;
        for (int x : stones)
        {
            pq.push(x);
        }
        while (pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if (x != y)
            {
                pq.push(y - x);
            }
            else
            {
                continue;
            }
        }
        return pq.top();
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
    cout << obj.lastStoneWeight(nums);

    return 0;
}