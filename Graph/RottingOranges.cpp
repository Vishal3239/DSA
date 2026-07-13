#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<pair<int,int>> movement = {
        {0,1},{-1,0},
        {0,-1},{1,0}
    };

    bool isValid(int i,int j,int m,int n){
        return i >= 0 && j >= 0 && i < m && j < n;
    }

    int orangesRotting(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2)
                    q.push({i,j});
                else if(grid[i][j] == 1)
                    fresh++;
            }
        }

        if(fresh == 0) return 0;

        int time = 0;

        while(!q.empty() && fresh > 0){

            int sz = q.size();

            while(sz--){

                pair<int,int>v = q.front();
                q.pop();
                int x = v.first;
                int y = v.second;

                for(auto d : movement){

                    int nx = x + d.first;
                    int ny = y + d.second;

                    if(!isValid(nx,ny,m,n)) continue;

                    if(grid[nx][ny] != 1) continue;

                    grid[nx][ny] = 2;
                    fresh--;

                    q.push({nx,ny});
                }
            }

            time++;
        }

        if(fresh > 0) return -1;

        return time;
    }
};

int main(){

    int m,n;
    cin>>m>>n;

    vector<vector<int>> grid(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    Solution obj;

    cout << obj.orangesRotting(grid);

    return 0;
}