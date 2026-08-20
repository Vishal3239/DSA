#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>freq;
        int maxLen = INT_MIN;
        int left = 0;
        for(int right=0;right<s.size();++right){
            freq[s[right]]++;
            while(freq[s[right]]>2){
                freq[s[left]]--;
                left++;
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.maximumLengthSubstring(s);
    
    return 0;
}