#include<bits/stdc++.h>
using namespace std;
const int N=1e2+10;
int fresh[N];
int cost[N];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,MinFreshValue,sum=0;
        cin>>n>>MinFreshValue;
        for(int i=0;i<n;i++)
        cin>>fresh[i];
        for(int i=0;i<n;++i)
        cin>>cost[i];
        for(int i=0;i<n;++i){
            if(MinFreshValue<=fresh[i]){
                sum+=cost[i];
            }
        }
        cout<<sum;
        
    }
    return 0;
}