#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s = to_string(n);

    if(next_permutation(s.begin(), s.end())){
        long long ans = stoll(s);

        if(ans > INT_MAX) cout << -1;
        else cout << ans;
    }
    else{
        cout << -1;
    }
}