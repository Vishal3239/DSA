#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();

    bool firstRow = false;
    bool firstCol = false;

    // check first row
    for (int j = 0; j < n; ++j)
    {
        if (matrix[0][j] == 0)
        {
            firstRow = true;
        }
    }

    // check first column
    for (int i = 0; i < m; ++i)
    {
        if (matrix[i][0] == 0)
        {
            firstCol = true;
        }
    }

    // mark rows and cols
    for (int i = 1; i < m; ++i)
    {
        for (int j = 1; j < n; ++j)
        {

            if (matrix[i][j] == 0)
            {

                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // set zeroes using markers
    for (int i = 1; i < m; ++i)
    {
        for (int j = 1; j < n; ++j)
        {

            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // make first row zero
    if (firstRow)
    {
        for (int j = 0; j < n; ++j)
        {
            matrix[0][j] = 0;
        }
    }

    // make first column zero
    if (firstCol)
    {
        for (int i = 0; i < m; ++i)
        {
            matrix[i][0] = 0;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    setZeroes(mat);

    return 0;
}