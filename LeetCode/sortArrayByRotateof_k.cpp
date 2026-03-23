#include<bits/stdc++.h>
using namespace std;
const int N=1e2+10;
int arr[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;++i)
        cin>>arr[i];
        int count=0;
        int size=arr.size();
        for(int i=0;i<n;++i){
            if(arr[i]>arr[(i+1)%size]){
                count++;
            }
        }
        if(count<=1)
        cout<<"true";
        else
        cout<<"false";
    
    }
    
    
    return 0;
    
}