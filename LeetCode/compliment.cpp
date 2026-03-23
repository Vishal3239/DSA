#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    int sum=0,i=0;
    while(n!=0){
        if(n%2==0)
        sum+=1*pow(2,i);
        else
        sum+=0*pow(2,i);
        n=n/2;
        i++; 
    }
    cout<<sum;
}