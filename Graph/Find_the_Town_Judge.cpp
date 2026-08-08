#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> g;

    int findJudge(int n, vector<vector<int>>& trust) {

        g.resize(n + 1);

        for(auto x : trust) {
            int u = x[0];
            int v = x[1];

            g[u].push_back(v);
        }

        // Jiska koi outgoing connection nahi hai
        for(int i = 1; i <= n; i++) {
            if(g[i].empty()) {
                g[i].push_back(0);
            }
        }

        set<pair<int,int>> st;

        for(int i = 1; i <= n; i++) {
            for(auto x : g[i]) {
                st.insert({x, i});
            }
        }

        for(auto x : st) {

            if(x.first == 0) {

                int judge = x.second;
                int count = 0;

                for(auto t : trust) {
                    if(t[1] == judge) {
                        count++;
                    }
                }

                if(count == n - 1) {
                    return judge;
                }
            }
        }

        return -1;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>trust(m,vector<int>(2));
    for(int i=0;i<m;++i){
        for(int j=0;j<2;++j){
            cin>>trust[i][j];
        }
    }
    Solution obj;
    cout<<obj.findJudge(n,trust);
    
    return 0;
}