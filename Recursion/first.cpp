#include<bits/stdc++.h>
using namespace std;
void Wish(int n){
    if(n==0) {
        cout<<"today my birthday.."<<endl;
        return;
    }
    
    cout<<n <<" day left my birthday..."<<endl;
    Wish(n-1);
}
int main(){
    int n;
    cin>>n;
    Wish(n);
    
    return 0;
}