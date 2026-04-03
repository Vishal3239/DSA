#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> position(n), healths(n);
    for (int i = 0; i < n; ++i)
        cin >> position[i];

    for (int i = 0; i < n; ++i)
        cin >> healths[i];

    string direction;
    cin >> direction;

    stack<int> st;
    vector<int> temp = position;
    sort(temp.begin(), temp.end());

    unordered_map<int, pair<int, char>> m;
    for (int i = 0; i < n; ++i)
        m[position[i]] = {healths[i], direction[i]};
    vector<int> ans;
    
    for (int i = 0; i < n; ++i)
    {
        int dir = temp[i];

        if (m[dir].second == 'R')
        {
            // st.push(m[dir].first);
            ans.push_back(m[dir].first);

        }
        else if (m[dir].second == 'L')
        {

            int curr = m[dir].first;

            if (!st.empty())
            {
                int top = st.top();
                st.pop();

                if (top > curr)
                    st.push(top - 1);
                else if (curr > top)
                    st.push(curr - 1);
                else
                {
                }
            }
            else
                st.push(m[dir].first);
        }
    }
    
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    
    for (auto x : ans)
        cout << x << " ";
}