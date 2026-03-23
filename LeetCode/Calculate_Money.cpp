#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int count=0;
    int j=1,k=7;
    while(count!=n){
        for(int i=j;i<=k;i++){
            sum+=i;
            count++;
            if(count==n)
            break;
        }
        j++;
        k++;
    }
    cout<<sum;
}