#include <bits/stdc++.h>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {

    // end point ke according sort
    sort(points.begin(), points.end(),
    [](vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    });

    // minimum 1 arrow lagega
    int arrows = 1;

    // first arrow ki position
    long long end = points[0][1];

    // remaining balloons check karo
    for(int i = 1; i < points.size(); ++i) {

        // overlap nahi hai
        if(points[i][0] > end) {

            arrows++;

            // new arrow current balloon ke end par
            end = points[i][1];
        }
    }

    return arrows;
}

int main() {

    vector<vector<int>> points = {
        {10,16},
        {2,8},
        {1,6},
        {7,12}
    };

    cout << findMinArrowShots(points);

    return 0;
}