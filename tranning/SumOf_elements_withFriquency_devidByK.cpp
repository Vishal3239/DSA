#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    unordered_map<int,int>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }

    for(auto x:m){
        cout<<x.second<<" ";
        if(x.second%k==0){
            sum+=x.first*x.second;

        }
    }
    cout<<sum;


}