#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n = target.size();
        if (n == 1)
            return target[0] == 1; 

        priority_queue<long long> pq(target.begin(), target.end());
        long long sum = 0;
        for (int x : target)
            sum += x;

        while (pq.top() != 1) {
            long long largest = pq.top();
            pq.pop();
            long long rest = sum - largest;

            if (rest == 0 || largest <= rest)
                return false;

            long long x = largest % rest;
            if (x == 0) {
                return rest == 1;
            }
            sum = rest + x;
            pq.push(x);
        }
        return true;
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