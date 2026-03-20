#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,H;
    cin>>L>>H;

    for(int i=L;i<=H;++i){
        int n=i;
        bool flag=true;
        while(n!=0){
            if(n%10==0 || i%(n%10)!=0){
                flag=false;
                break;
            }
            n/=10;
        }
        if(flag)
        cout<<i<<" ";
    }
}