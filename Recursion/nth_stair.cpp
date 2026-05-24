#include<bits/stdc++.h>
using namespace std;
int way(int n){
    if(n == 1 )
    return 1;
    if(n==2)
    return 2;
    return way(n-1)+way(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<way(n);
    
    return 0;
}