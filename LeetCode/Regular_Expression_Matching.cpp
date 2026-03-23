#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aa";
    string p="aa";
    int n=s.length();
    //int m=p.length();
    int j=0;
    for(int i=0;i<n;++i){
        if(p[j]==s[i]){
            j++;
            if(j==n)
            cout<<"true";
            
        }else if(s[0]==p[0] && p[j]=='*'){
            cout<<"true";
            break;
            
        }else if(p[j]=='.'&& p[++j]=='*'){
            cout<<"true";
            break;
        }else 
        cout<<"false";
        
    }
    
    
    
    
    
    
    return 0;
}