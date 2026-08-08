class Solution {
public:
    
    vector<vector<int>> g;
    int findJudge(int n, vector<vector<int>>& trust) {
        g.resize(n+1);
        for(auto x:trust)
        {
            int u = x[0];
            int v = x[1];
            g[u].push_back(v);
        }
        for (int i = 1; i <= n; i++) {
            if (g[i].empty()) {
                g[i].push_back(0);
            }
        }
        set<pair<int,int>>st;
        for(int i = 1;i<=n;++i){
            for(auto x : g[i]){
                st.insert({x,i});
            }
        }
        if(st.size()>2) return -1;
        for(auto x:st){
            if(x.first==0) return x.second;
        }
        
        
    }
};