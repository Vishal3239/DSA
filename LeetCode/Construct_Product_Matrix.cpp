#include<bits/stdc++.h>
using namespace std;
int main(){
    long long const mod=12345;
    int m,n;
    cin>>m>>n;
    vector<vector<int>>nums(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }
    long long int prifix=1;
    vector<vector<int>>ans(m,vector<int>(n));
    for(int i=0;i<m;i++){  
        for(int j=0;j<n;j++){
            ans[i][j]=prifix;
            prifix=(prifix*nums[i][j])%mod;
        }
    }


    long long int sufix=1;
    for(int i=m-1;i>=0;--i){
        for(int j=n-1;j>=0;j--){
            ans[i][j]=(ans[i][j]*sufix)%mod;
            sufix=(sufix*nums[i][j])%mod;

        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
    
    

}