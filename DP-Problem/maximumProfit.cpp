#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>& itemwt,vector<int>& val,int W,int n){
    if(n==0 || W==0){
        return 0;
    }
    if(itemwt[n - 1] <= W){
        int take = val[n-1]+maxprofit(itemwt,val,W-itemwt[n-1],n-1);
        int notTake = maxprofit(itemwt,val,W,n-1);
        return max(take,notTake);
    }else{
       return maxprofit(itemwt,val,W,n-1);
    }
    

}
int main(){
    int n,W;
    cin>>n>>W;
    vector<int>itemWt(n),itemval(n);
    for(int i=0;i<n;i++){
        cin>>itemWt[i];
    }

    for(int i=0;i<n;i++){
        cin>>itemval[i];
    }
    cout<<maxprofit(itemWt,itemval,W,n);
    
    return 0;
}