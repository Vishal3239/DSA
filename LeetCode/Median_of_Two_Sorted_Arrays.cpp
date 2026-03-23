#include<bits/stdc++.h>
using namespace std;
void median(vector<int>&arr1,vector<int>&arr2){
    
    int result;
    vector<int>v;
    v.insert(v.end(),arr1.begin(),arr1.end());
    v.insert(v.end(),arr2.begin(),arr2.end());
    sort(v.begin(),v.end());
    for(auto y:v){
        cout<<y<<" ";
    }
    cout<<endl;
    int n=v.size();
    if(n%2!=0){
        result=((n+1)/2)-1;
        cout<<v[result];
    }else{
        int a=(n/2-1);
        int b=(n/2+1-1);
        float ans=(v[a]+v[b])/2.0;  
        cout<<ans;
    }
}
int main(){
    vector<int>arr1={2,2,4,4};
    vector<int>arr2={2,2,2,4,4};
    median(arr1,arr2);

}
