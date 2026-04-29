#include<bits/stdc++.h>
using namespace std;
void solve(string &digits, int idx, string &temp, vector<string> &ans, unordered_map<int, vector<char>> &mp){
    if(idx == digits.size()){
        ans.push_back(temp);
        return;
    }

    int digit = digits[idx] - '0';

    for(char ch : mp[digit]){
        temp.push_back(ch);
        solve(digits, idx + 1, temp, ans, mp);
        temp.pop_back(); // backtrack
    }
}
vector<string> letterCombinations(string digits) {
    unordered_map<int,vector<char>>mp;
    mp[2]={'a','b','c'};
    mp[3]={'d','e','f'}; 
    mp[4]={'g','h','i'}; 
    mp[5]={'j','k','l'}; 
    mp[6]={'m','n','o'}; 
    mp[7]={'p','q','r','s'}; 
    mp[8]={'t','u','v'}; 
    mp[9]={'w','x','y','z'};
    vector<string> ans;
    string temp = "";

    solve(digits, 0, temp, ans, mp);

    return ans;
}
int main(){
    string s;
    cin>>s;
    vector<string>ans=letterCombinations(s);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}