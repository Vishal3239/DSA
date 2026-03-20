#include<bits/stdc++.h>
using namespace std;
int main(){
    string S1;
    string S2;
    cin>>S1>>S2;
    int m=S1.size();
    int n=S2.size();
    int j=0;
    if(m>=n){
        for(int i=0;i<m;i++){
            if(j!=n){
                if(S2[j]==S1[i]){
                    j++;
                }
            } 
        }
        if(j==n){
            cout<<"true";
        }
        else{
            cout<<" false";
        }
    }else{
        cout<<"false";
    }
    
    return 0;
}