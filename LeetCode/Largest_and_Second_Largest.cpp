#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here 
        sort(a,a+n);
        int sum=0;
        int second=0;
        // for(int i=0; i<n; i++){
        //     cout<<a[i]<<" ";
        // }
         int largest=a[n-1];
         for(int i=n-1; i>=0; i--){
            if(a[i]<largest){
                second=a[i];
                break;
            }
         }
         sum=largest+second;
    cout<<sum;
     }
}