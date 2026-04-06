#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    map<int, int> m;

    for(int i = 0; i < n; i++){
        int temp = target - nums[i];

        // check pehle karo
        if(m.find(temp) != m.end()){
            cout << m[temp] << " " << i;
            return 0;
        }

        // fir insert karo
        m[nums[i]] = i;
    }
}