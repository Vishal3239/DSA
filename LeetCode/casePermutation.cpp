#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
void solve(int indx,string& s){
    if(indx==s.size()){
        ans.push_back(s);
        return;
    }

    if(isalpha(s[indx])){
        s[indx]=tolower(s[indx]);
        solve(indx+1,s);

        s[indx]=toupper(s[indx]);
        solve(indx+1,s);
    }else{
        solve(indx+1,s);
    }

}
vector<string>casePermutation(string str){
    solve(0,str);
    return ans;
}
int main(){
    string str;
    cin>>str;
    vector<string>ans;
    ans = casePermutation(str);
    for(string s:ans)
    cout<<s<<" ";
    
    return 0;
}