#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++)
    cin>>nums[i];
    // int t1=t;
    // int count=0,sum=0;
    // while(1){
    //     for(int i=0;i<n;i++){
            
            
    //         if(t==nums[i]){
    //             count++;
    //             sum+=nums[i];   
    //         }else if(t==nums[i]){
    //             count++;
    //             sum+=nums[i];
    //         }else if(t1==nums[i]){
    //             count++;
    //             sum+=nums[i];
    //         }
    //         if(count==3)
    //         break;
            
    //     }
    //     t++;
    //     t1--;
        
    //     if(count==3)
    //     break;
    // }
    // cout<<sum;
    sort(nums.begin(),nums.end());
    int closet=nums[0]+nums[1]+nums[2];
    for(int i=0;i<n-2;++i){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(abs(target-sum) < abs(target-closet)){
                closet=sum;
            }
            if(sum<closet)
            left++;
            else
            right--;
        }
    }
    cout<<closet;
    return 0;
}