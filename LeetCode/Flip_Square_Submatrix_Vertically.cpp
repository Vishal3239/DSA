#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;

    vector<vector<int>> grid(m, vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    int x,y,k;
    cin>>x>>y>>k;

    for(int i=0;i<k/2;i++){
        for(int j=0;j<k;j++){
            swap(grid[x+i][y+j], grid[x+k-1-i][y+j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}