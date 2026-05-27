#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<
        vector<int>,
        vector<vector<int>>,
        greater<vector<int>>
    >pq;
    int n = matrix.size();
    for(int i =0;i<n;++i){
        pq.push( { matrix[i][0] , i , 0 } );
    }

    int ans; 

    while(k--){

        auto temp = pq.top();
        pq.pop();
        
        int val = temp[0];
        int row = temp[1];
        int col = temp[2];

        ans = val;

        if(col + 1 < n ){
            pq.push({ matrix[row][col + 1] , row , col + 1 } );
        }

    }
    return ans;

}
int main(){
    int n, k;
    cin >> n >> k;

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    cout<<kthSmallest(mat,k);
    
    return 0;
}