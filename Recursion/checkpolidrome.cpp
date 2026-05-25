#include<bits/stdc++.h>
using namespace std;
int check(string s,string add,int n){
    if(n==0){
        add+=s[0];
        if(s==add) return true;
        else return false;  
        
    }
    add+=s[n];
    return check(s,add,n-1);
    
}
int main(){
    string s;
    cin>>s;
    cout<<check(s,"",s.length()-1);
    
    return 0;
}