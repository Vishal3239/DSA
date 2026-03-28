#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;

    vector<vector<int>> mat(m, vector<int>(n));
    // vector<vector<int>> ans(m, vector<int>(n));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    // vector<vector<int>> original = mat; // save original

    // for (int row = 0; row < m; ++row)
    // {
    //     int shifts = k % n;

    //     while (shifts--)
    //     {
    //         if (row % 2 == 0)
    //         {
    //             int temp = mat[row][0];
    //             for (int j = 0; j < n - 1; j++)
    //                 ans[row][j] = mat[row][j + 1];

    //             ans[row][n - 1] = temp;
    //         }
    //         else
    //         {
    //             int temp = mat[row][n - 1];
    //             for (int j = n - 1; j > 0; --j)
    //                 ans[row][j] = mat[row][j - 1];

    //             ans[row][0] = temp;
    //         }

    //         mat[row] = ans[row]; // update for next shift
    //     }
    // }

    // cout << "ans is:\n";
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << mat[i][j] << " ";
    //     cout << endl;
    // }

    // if (original == mat)
    //     cout << "true";
    // else
    //     cout << "false";

    k=k%n;
    bool same=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
               if( mat[i][j]!=mat[i][(j+k)%n]){
                same= false;
                break;
               }
            }else{
               if( mat[i][j]!=mat[i][(j-k+n)%n]){
                same= false;
                break;
               }
            }
        }
        if(!same) 
        break;
    }
    if(same)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}