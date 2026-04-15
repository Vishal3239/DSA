#include<bits/stdc++.h>
using namespace std;
int closestTarget(vector<string>& words, string target, int startIndex) {
    int ans=INT_MAX;
    int n=words.size();
    for(int i=0;i<n;++i){
        if(words[i]==target){
            int d = abs(startIndex - i);
            int circularDist = min(d, n - d);
            ans = min(ans, circularDist);
        } 
    } 
    return (ans==INT_MAX)?-1:ans;
}
int main(){
    int n;
    cin>>n;
    vector<string>words(n);
    for(int i=0;i<n;++i)
    cin>>words[i];
    string target;
    cin>>target;
    int startIndex;
    cin>>startIndex;
    cout<<closestTarget(words,target,startIndex);
    return 0;
}