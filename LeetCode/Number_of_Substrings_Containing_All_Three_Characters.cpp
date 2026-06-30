#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int L=0;
        int count[3]={0};
        int ans=0;
        for(int i=0;i<n;++i){
            count[s[i]-'a']++;
            
            while(count[0]>0 && count[1]>0 && count[2]>0){
                ans+=n-i;
                count[s[L]-'a']--;
                L++;
            }

        }
        return ans;
    }
};

int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.numberOfSubstrings(s);
    
    return 0;
}