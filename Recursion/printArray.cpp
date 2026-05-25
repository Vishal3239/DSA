#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &num, int n)
{
    if (n==0)
    {
        cout << num[n] << " ";
        return;
    }
    
    print(num, n-1);
    cout << num[n] << " ";
}
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i)
        cin >> num[i];
    print(num, n-1);

    return 0;
}