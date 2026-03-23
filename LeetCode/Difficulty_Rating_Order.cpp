#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        // your code goes here
        int count=0;
        for(int i=0;i<n-1;++i){
            if(d[i]<=d[i+1]){
                count++;
            }
        }
        if(n-1==count)
        cout<<"Yes";
        else
        cout<<"No";
    }
    return 0;

}