#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
        return ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u';
    }
    string sortVowels(string s) {
        unordered_map<char,int>freq,firstPos;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                freq[s[i]]++;
            
                if(firstPos.find(s[i])==firstPos.end()){
                    firstPos[s[i]]=i;
                }
            }
        }
        vector<char>v;
        for(auto it:freq){
            v.push_back(it.first);
        }
        sort(v.begin(),v.end(),[&](char a,char b){
            if(freq[a]!=freq[b])
                return freq[a]>freq[b];
            return firstPos[a]<firstPos[b];
        });
        string ans="";
        for(char ch:v){
            ans+=string(freq[ch],ch);
        }
        int j=0;
        for(int i=0;i<s.size();++i){
            if(isVowel(s[i])){
                s[i]=ans[j++];
            }
        }
        return s;
    }
int main(){
    string s;
    cin>>s;
    cout<<sortVowels(s);
    
    return 0;
}