#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";

    while(n > 0){
        n--;  // sabse important step
        
        int rem = n % 26;
        ans += ('A' + rem);
        
        n /= 26;
    }

    reverse(ans.begin(), ans.end());
    
    cout << ans;
}