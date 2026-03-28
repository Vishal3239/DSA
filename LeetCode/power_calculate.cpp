#include<bits/stdc++.h>
using namespace std;
int calcuate_pow(int a,int n){
    if(n==0)
    return 1;
    int half=calcuate_pow(a,n/2);
    if(n%2==0)
    return half*half;
    else 
    return a*half*half;
}

int main(){
    int num,n;
    cin>>num>>n;
    int ans=calcuate_pow(num,n);
    cout<< ans;
}