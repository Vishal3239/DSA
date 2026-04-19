#include <bits/stdc++.h>
using namespace std;

int findNthDigit(int n) {
    long long digitLength = 1;
    long long count = 9;
    long long start = 1;

    // Step 1: find kis block me n aata hai
    while (n > digitLength * count) {
        n -= digitLength * count;
        digitLength++;
        count *= 10;
        start *= 10;
    }

    // Step 2: exact number find karo
    start += (n - 1) / digitLength;

    // Step 3: us number ka required digit nikalo
    string s = to_string(start);
    return s[(n - 1) % digitLength] - '0';
}

int main() {
    int n;
    cin >> n;

    cout << findNthDigit(n);

    return 0;
}