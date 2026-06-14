#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>& arr){
    int n=arr.size();
    int curr_sum=arr[0];
    int max_sum=arr[0];
    for(int i=1;i<n;++i){
        curr_sum=max(arr[i],curr_sum+arr[i]);
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<maxSum(arr);
    
    return 0;
}