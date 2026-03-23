#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int>symbols={{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};

string IsBalanced(string s){
    stack<char>st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty()) 
            return "No";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket] !=0)
            return "No";
        }
    }
    if(st.empty())
    return "yes";
    return "No";
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<IsBalanced(s)<<endl;
    }
    
}