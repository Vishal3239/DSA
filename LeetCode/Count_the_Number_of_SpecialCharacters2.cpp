#include <bits/stdc++.h>
using namespace std;
int numberOfSpecialChars(string word)
{
    vector<int>s(26,-1);
    vector<int>c(26,-1);
    for(int i = 0;i<word.length();++i){
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z'){
            s[ch-'a'] = i;
        }else{
            if(c[ch-'A']==-1)
            c[ch-'A'] = i;
        }
    }
    int count = 0;
    for(int i = 0;i<26;++i){
        if(s[i] != -1 && c[i] != -1 && s[i] < c[i])
        count++;
    }
    return count;
}

int main()
{
    string s;
    cin >> s;
    cout << numberOfSpecialChars(s);

    return 0;
}