#include<bits/stdc++.h>
using namespace std;
int trapWater(vector<int>& arr){
    int prev=arr[0];
    int sum=0;
    for(int i=1;i<arr.size();++i){
        if(prev<=arr[i]){
            prev=arr[i];
            continue;
        }else{
            sum+=prev-arr[i];
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i)
    cin>>arr[i];
    cout<<trapWater(arr);
    
    return 0;
}