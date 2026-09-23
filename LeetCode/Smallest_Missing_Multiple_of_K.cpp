#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        int maxNum = *max_element(nums.begin(),nums.end());
        int i = k;
        if(k>maxNum) return k;
        while (i<=maxNum)
        {
            if(s.count(i)){

            }else{
                return i;
            }
            i+=k;
        }
        return k+k;
        
    }
};
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i =0;i<n;++i)
    cin>>nums[i];
    Solution rehan;
    cout<<rehan.missingMultiple(nums,k);
    
    return 0;
}