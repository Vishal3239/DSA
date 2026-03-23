#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
int min_cost[N][N];
int main(){
    int n;
    cin>>n;
   for(int i=2;i<=n;++i)
   min_cost[0][i]=INT_MAX;
   for(int j=2;j<=n;++j)
   min_cost[j][0]=INT_MAX;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>arr[i][j];
            
           min_cost[i][j]=min(min_cost[i-1][j],min_cost[i][j-1])+arr[i][j];
        }
    }
    int r,c;
    cin>>r>>c;
    cout<<min_cost[r][c]<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<min_cost[i][j]<<" ";
            //cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}