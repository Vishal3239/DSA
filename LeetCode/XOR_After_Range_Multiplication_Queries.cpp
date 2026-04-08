#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;++i)
    cin>>nums[i];
    int q;
    cin>>q;
    vector<vector<int>>queries(q,vector<int>(4));
    for(int i=0;i<q;++i){
        for(int j=0;j<4;j++){
            cin>>queries[i][j];
        }
    }
    
    for(int i=0;i<q;i++){
        int idx=queries[i][0];
        int ri=queries[i][1];
        int ki=queries[i][2];
        int vi=queries[i][3];
        while ((idx <= ri ))
        {
            nums[idx]=((long long)nums[idx] * vi) % mod;
            idx += ki;
        }
        
        
    }
    int ans=0;
    for(int i=0;i<n;i++){
        
        ans^=nums[i];
    }
    cout<<ans<<" ";

    

}