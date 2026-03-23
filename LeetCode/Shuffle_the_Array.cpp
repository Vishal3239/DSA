#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int j=n/2;
    
    for(int i=0;i<n/2;i++){
        v2.push_back(v[i]);
        v2.push_back(v[j+i]);
    }

    for(auto x:v2)
    cout<<x<<" ";
}