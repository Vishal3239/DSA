#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n,1));
    for(int i=1;i<m;++i){
        for(int j=1;j<n;j++){
            grid[i][j]=grid[i][j-1]+grid[i-1][j];
        }
    }
    cout<<grid[m-1][n-1];

}