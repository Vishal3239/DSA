#include<bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> ans;
    
    vector<int> freqP(26, 0), freqS(26, 0);

    for(char c : p)
        freqP[c - 'a']++;

    int k = p.size();

    for(int i = 0; i < s.size(); i++) {
        freqS[s[i] - 'a']++;

        // window size maintain karo
        if(i >= k) {
            freqS[s[i - k] - 'a']--;
        }

        // compare
        if(freqS == freqP) {
            ans.push_back(i - k + 1);
        }
    }

    return ans;
}

int main(){
    string s,p;
    cin >> s >> p;

    vector<int> ans = findAnagrams(s,p);

    for(int x : ans)
        cout << x << " ";

    return 0;
}