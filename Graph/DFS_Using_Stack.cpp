#include<bits/stdc++.h>
using namespace std;

void DFS(int start, vector<vector<int>>& adjMatrix, int V) {
    vector<bool> visited(V, false);
    stack<int> st;

    st.push(start);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";
        }

        // push neighbors
        for (int i = V - 1; i >= 0; i--) {
            if (adjMatrix[node][i] == 1 && !visited[i]) {
                st.push(i);
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
    
    cout<<" DFS Traversal .. ";
    DFS(2,adjMatrix,v);

    
    return 0;
}