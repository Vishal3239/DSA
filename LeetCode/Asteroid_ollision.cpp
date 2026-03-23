#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> asteroid(n), ans;
    stack<int> st;
    for (int i = 0; i < n; ++i)
        cin >> asteroid[i];
// 2 3 -6 5 -1 4
    for(int ast : asteroid){
        if(ast<0 and !st.empty() and st.top()>0){
            bool flag = true;
            while(!st.empty() and st.top() > 0){
                if(abs(ast)>st.top())
                st.pop();
                else if(abs(ast)<st.top()){
                    flag=false;
                    break;
                }else{
                    st.pop();
                    flag=false;
                    break;
                }
            }
            if(flag)
            st.push(ast);
        }else
        st.push(ast);
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    for(int output:ans)
    cout<<output<<" ";
    
}