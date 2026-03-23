#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int arr[N][N];
int main(){
   /* int n,q;
    int sum=0;
    cin>>n>>q;

    while(q!=0){
        int t,in,v;
        cin>>t>>in>>v;
        for(int i=0;i<n;++i){    
            if(t==0)
            arr[in][i]=v;
            else
            arr[i][in]=v;
            
        }
        q--;
    }
    cout<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
        }
        cout<<endl;
    }
    // cout<<endl<<"sum is:"<<sum;
    */




    int n=3;
    vector<vector<int>>queries={{0,0,1},{1,2,2},{0,2,3},{1,0,4}};
    int q=queries.size();
        vector<int>row(n,0),col(n,0);
        long long sum=0;
        int r=0,c=0;
        for(int i=q-1;i>=0;--i){   
            int t=queries[i][0];
            int in=queries[i][1];    
            int v=queries[i][2];    
            if(t==0){
                if(row[in]==0){
                    sum+=(long long)(n-c)*v;
                    row[in]=1;
                    r++;
                }
            }
            else{
                if(col[in]==0){
                    sum+=(long long)(n-r)*v;
                    col[in]=1;
                    c++;
                }
            }
        }
        cout<<sum;


}