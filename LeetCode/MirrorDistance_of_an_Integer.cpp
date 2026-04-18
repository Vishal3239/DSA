#include<bits/stdc++.h>
using namespace std;
int mirrorDistance(int n){
    int rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<abs(n - mirrorDistance(n));
    return 0;
}