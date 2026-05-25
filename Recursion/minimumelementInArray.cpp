#include<bits/stdc++.h>
using namespace std;
int minimum(vector<int> &num, int n)
{
    if (n==0)
    {
        return num[n];
    }
    
    return min( num[n],minimum(num,n-1));
}
int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i)
        cin >> num[i];
    cout<<minimum(num, n-1);
    
    return 0;
}