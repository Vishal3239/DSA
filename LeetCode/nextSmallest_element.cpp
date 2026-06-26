#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        vector<int>ans;
        stack<int>st;
        for(int i=arr.size()-1;i>=0;--i){
            if(st.empty()){
                ans.push_back(-1);
            }
            else if(!st.empty() && arr[i]>st.top()){
                ans.push_back(st.top());
            }
            else if(!st.empty() && st.top()>= arr[i]){
                while(!st.empty() && st.top()>= arr[i]){
                    st.pop();
                }
                if(st.empty())
                ans.push_back(-1);
                else
                ans.push_back(st.top());
            }
            st.push(arr[i]);

            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    void display(vector<int>& ans){
        for(auto x:ans){
            cout<<x<<" ";
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n),ans;
    for(int i=0;i<n;++i)
    cin>>arr[i];
    Solution S;
    ans=S.nextSmallerEle(arr);
    S.display(ans);
    return 0;
}