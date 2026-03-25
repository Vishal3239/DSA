#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n));
    long long total=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>grid[i][j];
            total+=grid[i][j];
        }
    }
    if(total % 2 !=0 ){
        cout<<"false";
        return 0;
    }
    long long half = total / 2;
    //long long int targate = totel/2;
    long long sum=0;
    for(int i=0;i<m-1;++i){
        for(int j=0;j<n;++j){
            
            sum+=grid[i][j];
        }
        if(sum == half){
            cout<<"true";
            return 0;
        }
    }
    sum=0;
    for(int j=0;j<n-1;++j){
        for(int i=0;i<m;++i){
            
            sum+=grid[i][j];
        }
        if(sum == half){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}