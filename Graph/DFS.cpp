#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adjMatrix, vector<bool> &visite, int v)
{

    visite[node] = true;
    cout << node << " ";

    for (int i = 0; i <= v; ++i)
    {
        if (adjMatrix[node][i] == 1 && !visite[i])
        {
            DFS(i, adjMatrix, visite, v);
        }
    }
}

int main()
{
    int v = 7;
    vector<vector<int>> adjMatrix(v, vector<int>(v, 0));
    // graph edge
    adjMatrix[0][1] = adjMatrix[0][2] = adjMatrix[0][3] = 1;
    adjMatrix[1][0] = adjMatrix[1][1] = 1;
    adjMatrix[2][0] = adjMatrix[2][4] = 1;
    adjMatrix[3][4] = 1;
    adjMatrix[4][2] = adjMatrix[4][3] = adjMatrix[4][5] = adjMatrix[4][6] = 1;
    adjMatrix[5][4] = 1;
    adjMatrix[6][4] = 1;

    // create visiteda array
    vector<bool> visite(v, false);

    cout << " DFS Traversal .. ";
    DFS(2, adjMatrix, visite, v);

    return 0;
}