#include<bits/stdc++.h>
using namespace std;
bool finds(vector<vector<int>>& arr,int t){
    int m=arr.size();
    int n = arr[0].size();
    int i = 0;
    int j = n - 1;
    
    while (i < m && j >= 0)
    {
        if(arr[i][j]==t) return true;
        if(arr[i][j]<t){
            i++;
        }else {
            j--;
        }

    }
    return false;
}

int main(){
    int m, n,t;
    cin >> m >> n>>t;
    vector<vector<int>>arr(m,vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<finds(arr,t);
    
    return 0;
}