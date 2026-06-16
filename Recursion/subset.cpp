#include<bits/stdc++.h>
using namespace std;
void solve(string s,string ans,int indx){
    if(indx==s.size()){
        cout<<ans<<" ";
        return;
    }
    solve(s,ans+s[indx],indx+1);
    solve(s,ans,indx+1);

}
int main(){
    string s;
    cin>>s;
    solve(s,"",0);
    
    return 0;
}