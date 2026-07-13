#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> dist;
    vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
    int minimumObstacles(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        dist.assign(m,vector<int>(n,INT_MAX));
        deque<pair<int,int>>dq;

        dist[0][0]=0;
        dq.push_front({0,0});

        while(!dq.empty()){
            pair<int,int>v = dq.front();
            int x = v.first;
            int y = v.second;
            dq.pop_front();
            for(pair<int,int>d : dir){
                int nx = x + d.first;
                int ny = y + d.second; 

                if(nx < 0 || ny < 0 || nx >= m || ny >= n ) continue;

                int wt = grid[nx][ny];


                if(dist[x][y] + wt < dist[nx][ny]){
                    dist[nx][ny] = dist[x][y]+wt;
                    if(wt == 0){
                        dq.push_front({nx,ny});
                    }else{
                        dq.push_back({nx,ny});
                    }
                }
            }
            
        }
        return dist[m-1][n-1];
        
    }
};
int main(){ 
    int m,n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    Solution obj;
    cout << obj.minimumObstacles(grid);
    
    return 0;
}