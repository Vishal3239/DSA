#include<bits/stdc++.h>
using namespace std;
int numberOfSpecialChars(string word) {
    unordered_map<char,int>m;
    for(char x : word ){
        m[x] = x;
    }
    int count = 0;
    unordered_set<char>s;
    for(char x : word){
       s.insert(x);
    }
    for(auto x : s){
        if(x <= 'Z'){
            if(m.count(x + 32))
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    cout<<numberOfSpecialChars(s);
    
    return 0;
}