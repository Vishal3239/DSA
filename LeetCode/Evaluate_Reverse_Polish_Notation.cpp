#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    stack<int> st;
    int a, b;
    for (string t : arr)
    {
        if (t == "+")
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b + a);
        }
        else if (t == "-")
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b - a);
        }
        else if (t == "*")
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b * a);
        }
        else if (t == "/")
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b / a);
        }
        else
        {
            st.push(stoi(t));
        }
    }
    int ans = st.top();
    st.pop();
    cout << ans;
}