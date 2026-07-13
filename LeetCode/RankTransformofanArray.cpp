#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        vector<int> ans(arr.size());
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        
        > pq;
        for (int i = 0; i < arr.size(); ++i)
        {
            pq.push({arr[i], i});
        }
        int rank = 1;
        int prev = -1;
        bool first = true;

        while (!pq.empty())
        {
            pair<int, int> v = pq.top();
            int indx = v.second;
            int value = v.first;
            pq.pop();
            if(first){
                ans[indx] = rank;
                prev = value;
                first = false;
            }else{
                if(prev == value){
                    ans[indx]=rank;
                }else{
                    rank++;
                    ans[indx]=rank;
                    prev=value;
                }
            }
            
            
            
        }
        return ans;
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
    vector<int> ans = obj.arrayRankTransform(nums);
    for (int i = 0; i < nums.size(); ++i)
    {
        cout << ans[i] << " ";
    }

    return 0;
}