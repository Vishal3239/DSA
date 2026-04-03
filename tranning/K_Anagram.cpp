#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string str1, str2;
    cin >> str1 >> str2 >> k;

    if(str1.length() != str2.length()){
        cout << "Not Possible";
        return 0;
    }

    map<char,int> m1, m2;

    for(int i = 0; i < str1.length(); i++){
        m1[str1[i]]++;
        m2[str2[i]]++;
    }

    int changes = 0;

    for(auto it : m1){
        char ch = it.first;
        int freq1 = it.second;
        int freq2 = m2[ch];

        if(freq1 > freq2){
            changes += (freq1 - freq2);
        }
    }

    if(changes <= k){
        cout << "Yes,make Anagram";
    } else {
        cout << "Not Possible";
    }

    return 0;
}