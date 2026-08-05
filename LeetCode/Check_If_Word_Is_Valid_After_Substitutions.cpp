#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        string st;

        for(char ch : s) {
            st.push_back(ch);

            if(st.size() >= 3 &&
               st.substr(st.size()-3) == "abc") {
                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }

        return st.empty();
    }
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.isValid(s);
    return 0;
}