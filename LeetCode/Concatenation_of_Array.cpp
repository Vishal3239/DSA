#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
    vector<int>ans;
    int t=2;
    while(t!=0){
        for(int i=0;i<n;++i){
            ans.push_back(v[i]);
        }
        t--;
    }
    for(auto x:ans)
    cout<<x<<" ";

}