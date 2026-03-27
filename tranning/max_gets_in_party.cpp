#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>m(n),t(n);
    for(int i=0;i<n;++i)
    cin>>m[i];
    for(int i=0;i<n;++i)
    cin>>t[i];
    int max=0;
    int temp = 0;
    for(int i=0;i<n;++i){
        temp=(temp+m[i])-t[i];
        if(temp>max)
        max=temp;
    }
    cout<<max;
    

}