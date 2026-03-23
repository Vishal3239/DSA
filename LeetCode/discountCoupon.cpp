#include<bits/stdc++.h>
using namespace std;

const int N=1e2+10;
int arr[N];
int totalSum;
int couponSum;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int store=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            totalSum+=arr[i];
            store=arr[i]-y;
            if(store>0){
                couponSum+=store;
            }else{
                couponSum+=0;
            }

        }
        if((couponSum+x)<totalSum)
        cout<<"COUPON";
        else
        cout<<"NO COUPON";
        

    }
    return 0;
}