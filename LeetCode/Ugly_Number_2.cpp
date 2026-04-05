#include<bits/stdc++.h>
using namespace std;
bool isugly(int n){
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    while(n%5==0) n/=5;
    return (n==1);
}
int main(){
    int n;
    cin>>n;
    int i=0;
    while(n!=0){
        ++i;
       if( isugly(i) )
        n--;
    }
    cout<<i;
}