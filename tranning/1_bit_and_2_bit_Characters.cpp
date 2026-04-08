#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>bits(n);
    for(int i=0;i<n;++i)
    cin>>bits[i];
    int count = 0;
    int i = n-2;
    while(1>=0 && bits[i]==1){
        count++;
        i--;
    }
    if(count % 2 == 0)
    cout<<"Single Bit";
    else
    cout<<"Double Bit";
    return 0;
    
}