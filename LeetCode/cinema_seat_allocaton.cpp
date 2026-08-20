#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        // row -> reserved seats
        unordered_map<int, unordered_set<int>> mp;

        for (auto &seat : reservedSeats) {
            mp[seat[0]].insert(seat[1]);
        }

        int ans = 0;

        // Sirf wahi rows check karni hain jisme reservation hai
        for (auto &[row, seats] : mp) {

            bool left = true;   // 2,3,4,5
            bool middle = true; // 4,5,6,7
            bool right = true;  // 6,7,8,9

            for (int s : {2, 3, 4, 5}) {
                if (seats.count(s)) {
                    left = false;
                    break;
                }
            }

            for (int s : {4, 5, 6, 7}) {
                if (seats.count(s)) {
                    middle = false;
                    break;
                }
            }

            for (int s : {6, 7, 8, 9}) {
                if (seats.count(s)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
                // Dono side ke groups ek saath lag sakte hain
                ans += 2;
            }
            else if (left || middle || right) {
                // Koi ek block available hai
                ans += 1;
            }
        }

        // Jitni rows me ek bhi reservation nahi hai,
        // unme 2 groups aa sakte hain
        int reservedRows = mp.size();

        ans += (n - reservedRows) * 2;

        return ans;
    }
};
int main(){
    
    
    return 0;
}