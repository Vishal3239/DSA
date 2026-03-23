#include<bits/stdc++.h>
using namespace std;
void solve(int open, int close,int n,string s,vector<string>&ans){
    if(s.size()==2*n){
        ans.push_back(s);
        return;
    }
    if(open<n)
    solve(open+1,close,n,s+"(",ans);
    if(close<open)
    solve(open,close+1,n,s+")",ans);
}

int main(){
    int n;
    vector<string>ans;
    cin>>n;
    solve(0,0,n,"",ans);
    for(auto x:ans)
    cout<<x<<" ";

}