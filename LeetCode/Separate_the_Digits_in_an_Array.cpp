#include<bits/stdc++.h>
using namespace std;
vector<int> separateDigits(vector<int>& nums) {
    vector<int>ans;
    for(int x : nums){
        vector<int>temp;
        while(x>0){
            temp.push_back(x%10);
            x/=10;
        }
        reverse(temp.begin(),temp.end());
        for(int num:temp)
        ans.push_back(num);

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n),ans;
    for(int i=0;i<n;++i)
    cin>>nums[i];
    ans=separateDigits(nums);
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}