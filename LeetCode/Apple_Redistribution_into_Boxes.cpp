#include <bits/stdc++.h>
using namespace std;
int minimumBoxes(vector<int> &apple, vector<int> &capacity)
{
    int totalApple = 0;
    for (auto x : apple)
        totalApple += x;
    sort(capacity.begin(), capacity.end());
    int minBox = 0;
    for (int i = capacity.size() - 1; i >= 0; --i)
    {
        if (totalApple <= 0)
            break;
        totalApple -= capacity[i];
        minBox++;
    }
    return minBox;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> apple(n), capicity(m);
    for (int i = 0; i < n; ++i)
        cin >> apple[i];
    for (int i = 0; i < m; ++i)
        cin >> capicity[i];
    cout << minimumBoxes(apple, capicity);

    return 0;
}