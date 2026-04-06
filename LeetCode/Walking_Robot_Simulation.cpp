#include <bits/stdc++.h>
using namespace std;

int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
    
    vector<pair<int,int>> dir = {
        {0,1},   // North
        {1,0},   // East
        {0,-1},  // South
        {-1,0}   // West
    };
    
    set<pair<int,int>> st;
    for(auto &obs : obstacles){
        st.insert({obs[0], obs[1]});
    }
    
    int x = 0, y = 0;
    int d = 0; // North
    int maxDist = 0;
    
    for(int cmd : commands){
        
        if(cmd == -2){
            d = (d + 3) % 4;
        }
        else if(cmd == -1){
            d = (d + 1) % 4;
        }
        else{
            for(int i = 0; i < cmd; i++){
                
                int nx = x + dir[d].first;
                int ny = y + dir[d].second;
                
                if(st.count({nx, ny})) break;
                
                x = nx;
                y = ny;
                
                maxDist = max(maxDist, x*x + y*y);
            }
        }
    }
    
    return maxDist;
}

int main(){
    
    int n;
    cin >> n;  // number of commands
    
    vector<int> commands(n);
    for(int i = 0; i < n; i++){
        cin >> commands[i];
    }
    
    int m;
    cin >> m;  // number of obstacles
    
    vector<vector<int>> obstacles(m, vector<int>(2));
    for(int i = 0; i < m; i++){
        cin >> obstacles[i][0] >> obstacles[i][1];
    }
    
    cout << robotSim(commands, obstacles);
}