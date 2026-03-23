#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;++i)
        arr.push_back(i);
        int M=*min_element(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>M)
            count++;
        }
        cout<<count;
    }
    return 0;
}