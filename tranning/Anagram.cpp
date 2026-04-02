#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"Not Anagram";
        return 0;
    }
    map<char,int>m1,m2;
    for(int i=0;i<s1.length();++i){
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    
    if(m1==m2)
    cout<<"Anagram";
    else
    cout<<"Not Anagram";

    return 0;
}