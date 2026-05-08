#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>

using namespace std;

// 1. Sieve of Eratosthenes: प्राइम नंबर को पहले से पहचानने के लिए
const int MAX_VAL = 1e5+1;
bool is_prime[MAX_VAL];
int spf[MAX_VAL]; // Smallest Prime Factor (तेजी से फैक्टराइजेशन के लिए)

void sieve() {
    fill(is_prime, is_prime + MAX_VAL, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAX_VAL; i++) spf[i] = i;
    
    for (int i = 2; i * i < MAX_VAL; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_VAL; j += i) {
                is_prime[j] = false;
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

// 2. किसी नंबर के सभी Prime Factors निकालने का फंक्शन
vector<int> getPrimeFactors(int n) {
    vector<int> factors;
    while (n > 1) {
        int p = spf[n];
        factors.push_back(p);
        while (n % p == 0) n /= p; // एक ही प्राइम को बार-बार न लें
    }
    return factors;
}

int minJumps(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;

    // Map: Prime -> उन सभी Indices की लिस्ट जहाँ nums[index] उस prime से कटता है
    unordered_map<int, vector<int>> primeToIndices;
    for (int i = 0; i < n; i++) {
        vector<int> factors = getPrimeFactors(nums[i]);
        for (int p : factors) {
            primeToIndices[p].push_back(i);
        }
    }

    // BFS की तैयारी
    queue<int> q;
    q.push(0);
    vector<bool> visitedIndex(n, false);
    unordered_map<int, bool> visitedPrime; // ताकि एक प्राइम को दोबारा न प्रोसेस करें
    visitedIndex[0] = true;

    int jumps = 0;

    while (!q.empty()) {
        int size = q.size();
        // Level by level BFS (हर लेवल पर 1 जम्प बढ़ेगा)
        while (size--) {
            int i = q.front();
            q.pop();

            // मंजिल मिल गई!
            if (i == n - 1) return jumps;

            // --- Option 1: Adjacent Steps ---
            if (i + 1 < n && !visitedIndex[i + 1]) {
                visitedIndex[i + 1] = true;
                q.push(i + 1);
            }
            if (i - 1 >= 0 && !visitedIndex[i - 1]) {
                visitedIndex[i - 1] = true;
                q.push(i - 1);
            }

            // --- Option 2: Prime Teleportation ---
            // अगर nums[i] प्राइम है, तो इसके Multiples पर जम्प करें
            if (is_prime[nums[i]]) {
                int p = nums[i];
                // अगर इस प्राइम ग्रुप को पहले यूज़ नहीं किया है
                if (visitedPrime.find(p) == visitedPrime.end()) {
                    for (int nextIdx : primeToIndices[p]) {
                        if (!visitedIndex[nextIdx]) {
                            visitedIndex[nextIdx] = true;
                            q.push(nextIdx);
                        }
                    }
                    // सबसे ज़रूरी Optimization: इस प्राइम को मार्क कर दें ताकि दोबारा न देखना पड़े
                    visitedPrime[p] = true; 
                    primeToIndices[p].clear(); // मेमोरी और टाइम बचाने के लिए
                }
            }
        }
        jumps++;
    }

    return -1;
}

int main() {
    sieve(); // प्रोग्राम शुरू होते ही छलनी तैयार करें
    vector<int> nums = {1, 2, 4, 6};
    cout << "Minimum Jumps: " << minJumps(nums) << endl; // Output: 2
    return 0;
}