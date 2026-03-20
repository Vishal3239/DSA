#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    cin>>arr[i];
    
    int a,b;
    a=arr[0];
    
    for(int i=1;i<n;++i){
        
        b=arr[i];
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }

    }
    cout<<a;

}