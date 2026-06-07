#include<bits/stdc++.h>
using namespace std;
vector<int>dp(100,-1);
int fibonacci(int n){
    if(n<=1)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    
    return 0;
}