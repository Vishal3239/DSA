#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    int count=0,maxcount=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            maxcount=max(maxcount,count);
        }else
        count=0;
    }
    cout<<maxcount;
}