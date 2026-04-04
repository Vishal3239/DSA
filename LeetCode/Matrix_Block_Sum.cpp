#include<bits/stdc++.h>
using namespace std;
const int N=1e2+10;
vector<vector<int>>mat(N,vector<int>(N));
vector<vector<int>>PFS(N,vector<int>(N));
int ans[N][N];
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>mat[i][j];
            PFS[i][j]=mat[i][j]+PFS[i-1][j]+PFS[i][j-1]-PFS[i-1][j-1];
        }
    }
    
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int r_start = max(1, i-k);
            int r_end   = min(m, i+k);

            int c_start = max(1, j-k);
            int c_end   = min(n, j+k);
            ans[i][j] = PFS[r_end][c_end]
                        -PFS[r_start-1][c_end]
                        -PFS[r_end][c_start-1]
                        +PFS[r_start-1][c_start-1];
            
        }
        
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}