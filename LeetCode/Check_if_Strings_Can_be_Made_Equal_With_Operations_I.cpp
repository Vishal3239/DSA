#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="bnxw";
    string s2="bwxn";
    int i=0;
    while(s1.length()!=i){
        for(int j=1;j<s1.length();j++){
            if(j-i==2 && s1[i]!=s2[i]){
                swap(s1[i],s1[j]);
            }
        }
        i++;
    }
    if(s1==s2)
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}