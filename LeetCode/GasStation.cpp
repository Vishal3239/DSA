#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{

    int total = 0;
    int tank = 0;
    int start = 0;

    for (int i = 0; i < gas.size(); i++)
    {

        int diff = gas[i] - cost[i];

        total += diff;
        tank += diff;

        // current start fail
        if (tank < 0)
        {
            start = i + 1;
            tank = 0;
        }
    }

    if (total < 0)
        return -1;

    return start;
}
int main()
{
    int n;
    cin >> n;
    vector<int> gas(n), cost(n);
    for (int i = 0; i < n; ++i)
        cin >> gas[i];
    for (int i = 0; i < n; ++i)
        cin >> cost[i];
    cout<<canCompleteCircuit(gas,cost);

    return 0;
}