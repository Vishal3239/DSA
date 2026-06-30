#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        unordered_set<char>st;
        int l=0;
        int maxLen=0;
        for(int r=0;r<s.size();r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxLen = max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.lengthOfLongestSubstring(s);
    
    return 0;
}