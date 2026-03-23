#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string S,T;
        cin>>S>>T;
        for(int i=0;i<S.length();++i){
            if(S[i]==T[i])
            cout<<"G";
            else
            cout<<"B";
        }
    }
}