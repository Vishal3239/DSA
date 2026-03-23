#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
// 1 5 4 8 2 7
    vector<int>ans(n,-1);
    stack<int>st;
    
    for(int i=0;i<n;++i){
        while(!st.empty() && v[i] > v[st.top()]){
            ans[st.top()]=v[i];
            st.pop();
        }
        st.push(i);

        
    }
    st=stack<int>();
    for(auto x:ans)
    cout<<x<<" ";
    
    


    
}