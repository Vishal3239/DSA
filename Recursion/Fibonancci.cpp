#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    // base case
    if(n==0) return 0;
    if(n==1) return 1;

    // recursive function

    return (fibo(n-2) + fibo(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    
    return 0;
}