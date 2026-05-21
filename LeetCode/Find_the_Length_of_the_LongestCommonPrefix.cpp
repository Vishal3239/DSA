#include<bits/stdc++.h>
using namespace std;
int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    int n=arr1.size();
    int m=arr2.size();
    unordered_set<string>us;
    for(int i=0;i<n;++i){
        string concat=""; 
        string temp = to_string(arr1[i]);
        for(char ch : temp ){
            concat+=ch;
            us.insert(concat);
        }
    }  
    int maxLen=0;
    for(int i=0;i<m;++i){
        string concat=""; 
        string temp = to_string(arr2[i]);
        for(char ch : temp ){
            concat+=ch;
            if(us.count(concat)){
                int Len=concat.length();
                maxLen=max(maxLen,Len);
            }
        }
    }
    return maxLen;
    
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n),arr2(m);
    for(int i =0;i<n;i++)
    cin>>arr1[i];
    for(int i =0;i<m;i++)
    cin>>arr2[i];
    cout<<longestCommonPrefix(arr1,arr2);
    
    return 0;
}