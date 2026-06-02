#include<bits/stdc++.h>
using namespace std;
void solve(int start,int n,int k,vector<int>& temp,vector<vector<int>>& ans){
    if(temp.size()==k){
        ans.push_back(temp);
        return;
    }
    for(int i=start;i<=n;++i){
        temp.push_back(i);
        solve(i+1,n,k,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int>>combination(int n,int k){
    vector<vector<int>>ans;
    vector<int>temp;
    solve(1,n,k,temp,ans);
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>ans;
    ans=combination(n,k);
    for(int i=0;i<ans.size();++i){
        for(int j =0;j<ans[0].size();++j){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}