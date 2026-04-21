#include<bits/stdc++.h>
using namespace std;
bool Automorphic(int n){
    int temp=n*n;
    int flage = false;
    while (n!=0)
    {
        if(n%10==temp%10)
        flage= true;
        else 
        flage=false;
        n/=10;
        temp/=10;
    }
    if(flage) return true;
    else return false;
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<Automorphic(n);
    return 0;
}