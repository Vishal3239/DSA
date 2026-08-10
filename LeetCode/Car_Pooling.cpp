#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>cap;
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        cap.assign(1002,0);
        for(auto x : trips){
            int n = x[0];
            int i = x[1];
            int j = x[2];
            cap[i] += n;
            cap[j] -= n; 
        }
        for(int i = 1;i<cap.size();++i){
            cap[i]+=cap[i-1];
        }
        int maxN = *max_element(cap.begin(),cap.end());
        if(maxN>capacity) return false;
        else return true;
    }
};
int main(){
    int n , c;
    cin>>n>>c;
    vector<vector<int>>num(n,vector<int>(3));
    for(int i=0;i<n;++i){
        for(int j = 0;j<3;++j){
            cin>>num[i][j];
        }
    }
    Solution obj;
    cout<<obj.carPooling(num,c);
    
    return 0;
}