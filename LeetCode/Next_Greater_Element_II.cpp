#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
// 1 5 4 8 2 7
// ans= 5 8 8 -1 7 8
    vector<int>ans(n,-1);
    stack<int>st;
    queue<int>q;
    
    for(int i = 0; i < 2*n; i++){
        int num = v[i % n];

        while(!st.empty() && num > v[st.top()]){
            ans[st.top()] = num;
            st.pop();
        }

        if(i < n){
            st.push(i);
        }
    }
    st=stack<int>();
    for(auto x:ans)
    cout<<x<<" ";
}