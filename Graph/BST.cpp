#include<bits/stdc++.h>
using namespace std;



void BST(int start,vector<vector<int>>&adjMatrix,int v){
    // create visiteda array 
    vector<bool>visite(v,false);
    // creat explore queue
    queue<int>q;

    visite[start]=true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout<< node <<" ";
        // check all vertices (matrix use)
        for(int i=0;i<=v;++i){
            if(adjMatrix[node][i]==1&&!visite[i]){
                visite[i]=true;
                q.push(i);
            }
        }
    }
}


int main(){
    int v=7;
    vector<vector<int>>adjMatrix(v,vector<int>(v,0));
    // graph edge 
    adjMatrix[0][1]=adjMatrix[0][2]=adjMatrix[0][3]=1;
    adjMatrix[1][0]=adjMatrix[1][1]=1;
    adjMatrix[2][0]=adjMatrix[2][4]=1;
    adjMatrix[3][4]=1;
    adjMatrix[4][2]=adjMatrix[4][3]=adjMatrix[4][5]=adjMatrix[4][6]=1;
    adjMatrix[5][4]=1;
    adjMatrix[6][4]=1;
    
    cout<<" BFS Traversal .. ";
    BST(2,adjMatrix,v);

    
    return 0;
}