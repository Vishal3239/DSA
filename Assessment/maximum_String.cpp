#include<bits/stdc++.h>
using namespace std;
string maxSteing(vector<vector<int>>&mat){
    // int m = mat.size();
    // int n = mat[0].size();
    
    priority_queue<int>pq;
    int maxNum = -1;
    // for(int i = 0;i<m;++i){
    //     int ans=0;
    //     for(int j = 0;j<n;++j){
    //         ans = (ans*10)+mat[i][j];
    //     }    
    //     pq.push(ans); 
    // }
    for(auto arr : mat){
        int ans=0;
        for(int x : arr){
            ans = (ans*10)+x;
        }
        pq.push(ans);
    }
    string ans="";
    while(!pq.empty()){
        ans+=to_string(pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int m,n;
    cin>>m;
    vector<vector<int>>mat;

    // vector<int>m1(m);
    for(int i =0;i<m;++i){
        cin>>n;
        vector<int>n1(n);
        for(int j=0;j<n;++j){
            cin>>n1[j];
        }
        mat.push_back(n1);

    }


    


    // vector<vector<int>>mat(m,vector<int>(n));
    // for(int i=0;i<m;++i){
    //     for(int j=0;j<n;++j){
    //         cin>>mat[i][j];
    //     }
    // }
    cout<<maxSteing(mat);
    
    return 0;
}