#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumPushes(string word)
    {
        unordered_map<int, vector<char>> m;
        for (int i = 2; i <= 9; ++i)
        {
            int n;
            cin >> n;
            vector<char> ch(n);
            for (int j = 0; j < n; ++j)
            {
                cin >> ch[j];
            }
            m[i] = ch;
        }
        int sum = 0;
        for (char c : word)
        {
            for (auto &it : m)
            {
                vector<char> &temp = it.second;
                for (int i = 0; i < temp.size();++i){
                    if(temp[i]==c)
                    sum+=i+1;
                }
            }
        }
        return sum;
    }
    
};

int main()
{
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.minimumPushes(s);

    return 0;
}