#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPossible(vector<int> &target)
    {
        int n = target.size();
        int maxElement = *max_element(target.begin(), target.end());
        if (maxElement < n)
            return false;
        priority_queue<int, vector<int>, greater<int>> pq1;
        int t = target.size();
        while (t--)
        {
            pq1.push(1);
        }
        int sum = 0;
        
        while (maxElement >= sum && n>0)
        {
            sum = 0;
            int t = target.size();
            while (t--)
            {
                sum += pq1.top();
                if (pq1.size() == target.size())
                {
                    pq1.pop();
                }
                else
                {
                    int x = pq1.top();
                    pq1.pop();
                    pq1.push(x);
                }
            }

            pq1.push(sum);
            auto it = find(target.begin(),target.end(),sum);
            if(it!=target.end()){
                n--;
            }
            
        }
        if(n == 0 )return true;
        else return false;
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
    cout<<obj.isPossible(nums);

    return 0;
}