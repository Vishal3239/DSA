#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> diff(n + 1, vector<int>(n + 1, 0));

    int q;
    cin >> q;

    vector<vector<int>> query(q, vector<int>(4));
    for(int i = 0; i < q; i++){
        for(int j = 0; j < 4; j++){
            cin >> query[i][j];
        }
    }

    // Step 1: Apply queries using difference array
    for(int i = 0; i < q; i++){
        int r1 = query[i][0];
        int c1 = query[i][1];
        int r2 = query[i][2];
        int c2 = query[i][3];

        diff[r1][c1] += 1;

        if(c2 + 1 < n) diff[r1][c2 + 1] -= 1;
        if(r2 + 1 < n) diff[r2 + 1][c1] -= 1;
        if(r2 + 1 < n && c2 + 1 < n) diff[r2 + 1][c2 + 1] += 1;
    }

    // Step 2: Row-wise prefix sum
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            diff[i][j] += diff[i][j - 1];
        }
    }

    // Step 3: Column-wise prefix sum
    for(int j = 0; j < n; j++){
        for(int i = 1; i < n; i++){
            diff[i][j] += diff[i - 1][j];
        }
    }

    // Step 4: Print result matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}