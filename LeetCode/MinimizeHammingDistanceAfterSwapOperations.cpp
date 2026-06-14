#include<bits/stdc++.h>
using namespace std;
int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
    int row=allowedSwaps.size();
    unordered_map<int,int>mp;
    for(int i=0;i<row;++i){
        mp[allowedSwaps[i][0]]=allowedSwaps[i][1];
    }
    for(auto x:mp){
        swap(source[x.first],source[x.second]);
    }
    int count=0;
    for(int i=0;i<source.size();i++){
        if(source[i]!=target[i])
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>sourse(n),target(n);
    for(int i=0;i<n;++i)
    cin>>sourse[i];
    for(int i=0;i<n;++i)
    cin>>target[i];
    int row;
    cin>>row;
    vector<vector<int>>allowedSwaps(row,vector<int>(2));
    for(int i=0;i<row;++i){
        for(int j=0;j<2;j++){
            cin>>allowedSwaps[i][j];
        }
    }

    cout<<minimumHammingDistance(sourse,target,allowedSwaps);
    
    return 0;
}