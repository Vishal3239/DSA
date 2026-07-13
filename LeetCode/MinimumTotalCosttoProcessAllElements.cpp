#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int M = 1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        
        int resource=k;
        for(int x : nums)
        {
            if(resource>=x){
                resource-=x;
            }
            else{
                
            }
        }
    }
};


int main(){
    int n,k;
    cin >> n>>k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    
    return 0;
}