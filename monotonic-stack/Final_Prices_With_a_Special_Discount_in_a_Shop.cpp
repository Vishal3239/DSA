#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        for(int i = prices.size()-1;i>=0;--i){
            int curr = prices[i];
            while (!st.empty() && st.top()>curr)
            {
                st.pop();
            }
            if(!st.empty()){
                prices[i]=curr-st.top();
            }
            st.push(curr);
            
        }
        return prices;
    }
}; 

int main(){
    int n;
    cin>>n;
    vector<int>arr(n),ans;
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        
    }
    Solution obj;
    ans=obj.finalPrices(arr);
    for(auto x:ans)
    cout<<x<<" ";
    
    return 0;
}