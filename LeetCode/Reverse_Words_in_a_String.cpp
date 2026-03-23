#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string temp="";
   
    stack<string>st;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ')
        temp+=s[i];
        if(s[i]==' '){
            st.push(temp);
            temp="";
        }
        if(i==s.length()){
            st.push(temp);
            temp="";
        }

    }
    while(!st.empty()){
        
        cout<<st.top()<<" ";
        st.pop();
    }
}