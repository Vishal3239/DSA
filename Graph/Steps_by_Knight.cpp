#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<vector<bool>> vis;
    int count = 0;

    bool isValid(int x, int y,int n)
    {
        return x >= 1 && y >= 1 && x <= n && y <= n;
    };

    vector<pair<int, int>> Movements = {
        {-1, 2}, {1, 2},
        {-2, 1}, {-2, -1},

        {2, 1}, {2, -1},
        {-1, -2}, {1, -2}

    };

    int minStepToReachTarget(vector<int> & knightPos, vector<int> &targetPos, int n)
    {
        vis.assign(n+1,vector<bool>(n+1,false));
        int NPX = knightPos[0];
        int NPY = knightPos[1];
        int TPX = targetPos[0];
        int TPY = targetPos[1];
        queue<pair<pair<int,int>,int>>q;
        q.push({{NPX, NPY},0});
        vis[NPX][NPY] = true;
        while (!q.empty())
        {
            pair<pair<int, int>,int> v = q.front();
            q.pop();
            int X = v.first.first;
            int Y = v.first.second;
            int step = v.second;
            if(X==TPX && Y==TPY)
            return step;
            for(auto movement : Movements){
                int childX = movement.first+X;
                int childY = movement.second+Y;
                if(!isValid(childX,childY,n)) continue;
                if(!vis[childX][childY]){
                    q.push({{childX,childY},step+1});
                    vis[childX][childY]=true;
                }
            }
        }
        return -1;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> knightPos(2);
    cin >> knightPos[0] >> knightPos[1];
    vector<int> targetPos(2);
    cin >> targetPos[0] >> targetPos[1];
    Solution obj;
    cout<<obj.minStepToReachTarget(knightPos,targetPos,n);
    return 0;
}