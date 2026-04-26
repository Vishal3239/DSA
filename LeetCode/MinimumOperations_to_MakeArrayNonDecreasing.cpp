#include<bits/stdc++.h>
using namespace std;
long long minOperations(vector<int>& nums) {
        long long ans=0;
        for(int i=nums.size()-2;i>=0;--i){
            
            if(nums[i]>nums[i+1]){
                ans+=(nums[i]-nums[i+1]);
            }
            
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    cout<<minOperations(nums);
    
    return 0;
}