#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        double ans=0;
        double maxNum = INT_MIN;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            count++;
            if(count==k){
                maxNum = max(maxNum,ans);
                ans-=nums[l];
                l++;
                count--;
            }
        }
        return maxNum/k;
    }
};

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    Solution obj;
    cout<<obj.findMaxAverage(nums,k);
    
    return 0;
}