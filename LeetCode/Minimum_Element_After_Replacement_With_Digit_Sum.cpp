#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    string num = to_string(n);
    int sum=0;
    for(char s : num){
        sum+=(s-'0');
    }
    return sum;
}

int minElement(vector<int>& nums) {
    vector<int>ans;
    for(auto x:nums){
        ans.push_back(digitSum(x));
    }
    sort(ans.begin(),ans.end());
    return ans[0];
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    cout<<minElement(nums);
    
    return 0;
}