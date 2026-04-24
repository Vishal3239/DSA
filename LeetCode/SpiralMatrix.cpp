#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int top = 0 , bottom = matrix.size()-1;
    int left = 0 , right = matrix[0].size()-1;
    vector<int>ans;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; ++i){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; ++i){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i>= left; --i){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; --i){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>mat(m,vector<int>(n));
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>mat[i][j];
        }
    }
    vector<int>ans=spiralOrder(mat);
    for(auto x:ans)
    cout<<x<<" ";
    
    return 0;
}