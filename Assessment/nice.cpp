#include<bits/stdc++.h>
using namespace std;
int nice(string a,string b){
    string ans = "";
    for(char ch : a){
        if(b.find(ch)!=string::npos){
            ans+=ch;
        }
    }
    return ans.length();
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<nice(a,b);
    
    return 0;
}