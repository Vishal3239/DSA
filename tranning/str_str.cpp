#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string x;
    cin>>s>>x;
    int n=s.length();
    int m=x.length();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(s[i+j]!=x[j]){
                break;
            }          
        }
        if(j==m){
            cout<<i;
            return 0;
        }
        
    }
    cout<<"-1";
    return 0;
}

