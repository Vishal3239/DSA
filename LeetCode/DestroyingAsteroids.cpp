#include <bits/stdc++.h>
using namespace std;

bool asteroidsDestroyed(int mass, vector<int> &asteroids)
{
    sort(asteroids.begin(), asteroids.end());

    long long planetMass = mass;

    for (int asteroid : asteroids)
    {
        if (planetMass < asteroid)
            return false;

        planetMass += asteroid;
    }

    return true;
}
int main()
{
    int n, mass;
    cin >> n >> mass;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << asteroidsDestroyed(mass, nums);

    return 0;
}