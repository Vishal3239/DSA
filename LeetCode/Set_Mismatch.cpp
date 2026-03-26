#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int duplicate=-1 , missing=-1;
    for(int i=0;i<n;++i){
        int val = abs(nums[i]);
        if(nums[val-1]<0){
            duplicate=val;
        }else{
            nums[val-1]*=-1;
        }
    }
    for(int i=0;i<n;++i){
        if(nums[i]>0){
            missing=i+1;
        }
    }
    cout<<duplicate<<" "<<missing;
}