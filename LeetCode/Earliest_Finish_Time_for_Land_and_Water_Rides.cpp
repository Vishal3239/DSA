#include <bits/stdc++.h>
using namespace std;

int earliestFinishTime(vector<int> &landStartTime, vector<int> &landDuration, vector<int> &waterStartTime, vector<int> &waterDuration)
{

    int n = landStartTime.size();
    int m = waterStartTime.size();

    long long ans = LLONG_MAX;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {

            long long landFinish = landStartTime[i] + landDuration[i];
            long long waterStart = max(landFinish, (long long)waterStartTime[j]);
            long long finish1 = waterStart + waterDuration[j];
            ans = min(ans, finish1);

            long long waterFinish = waterStartTime[j] + waterDuration[j];
            long long landStart = max(waterFinish, (long long)landStartTime[i]);
            long long finish2 = landStart + landDuration[i];
            ans = min(ans, finish2);
        }
    }
    return (int)ans;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> landStartTime(m), landDuration(m);
    vector<int> waterStartTime(n), waterDuration(n);

    for (int i = 0; i < m; i++)
        cin >> landStartTime[i];

    for (int i = 0; i < m; i++)
        cin >> landDuration[i];

    for (int i = 0; i < n; i++)
        cin >> waterStartTime[i];

    for (int i = 0; i < n; i++)
        cin >> waterDuration[i];

    cout << earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);

    return 0;
}