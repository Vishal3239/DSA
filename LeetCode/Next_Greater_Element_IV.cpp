#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    // vector<int>v1;
    // stack<int>st;
    // int r;
    for(int i=0;i<n;++i)
    cin>>v[i];
   /* int j=0;
    while(j<n){
        for(int i=j+1;i<n;++i){
            if(v[i]>v[j]){
                st.push(v[i]);     
                if(st.size()==2){
                    r=st.top();
                    while(!st.empty())
                    st.pop();
                    break;   
                }   
            }else{
                r=-1;
            }   
        }
        if(st.size()==1){
            r=-1;
            st.pop();
        }
        v1.push_back(r);
        j++;   
    } 
    for(auto x:v1)
    cout<<x<<" ";
    */
   // time complicity O(n^2)

   // Optimize solution

    vector<int>ans(n,-1);
    stack<int>st1,st2;
    for(int i=0;i<n;++i){
        while(!st2.empty() && v[i] > v[st2.top()]){
            ans[st2.top()]=v[i];
            st2.pop();
        }
        stack<int>temp;
        while(!st1.empty() && v[i] > v[st1.top()]){
            temp.push(st1.top());
            st1.pop();
        }
        while(!temp.empty()){
            st2.push(temp.top());
            temp.pop();
        }
        st1.push(i);
    }
    for(auto x:ans)
    cout<<x<<" ";

}