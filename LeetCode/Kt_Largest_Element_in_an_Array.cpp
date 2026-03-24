#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
    //  int max;
    // while(k!=0){
    //     max=*max_element(v.begin(),v.end());
    //     v.erase(find(v.begin(),v.end(),max));
    //     k--;
    // }
    
    // cout<<max;

    priority_queue<int, vector<int>, greater<int>> pq;
        
    for(int x : v){
        pq.push(x);
            
        if(pq.size() > k){
            pq.pop();
        }
    }
        
    cout<< pq.top();

}