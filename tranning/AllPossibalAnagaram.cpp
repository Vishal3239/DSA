#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;
    vector<int> freq1(26, 0), freq2(26, 0);
    for(char c :str1)
    freq1[c - 'a']++;
    for(char c : str2)
    freq2[c - 'a']++;
    int ans=0;
    for(int i=0;i<26;++i)
    ans+=min(freq1[i],freq2[i]);
        
    cout<<ans;
    return 0;
}