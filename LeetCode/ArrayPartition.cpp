#include<bits/stdc++.h>
using namespace std;
int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int i=0,j=1;
    int sum=0;
    while(j<=n){
        sum+=min(nums[i],nums[j]);
        i+=2;
        j+=2;
    }
    return sum;

       
}
int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i)
        cin >> num[i];
    cout<<arrayPairSum(num);
    return 0;
}