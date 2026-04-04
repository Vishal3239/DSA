#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n) {
    if (n <= 0) return false;

    // divide by 2
    while (n % 2 == 0) {
        n /= 2;
    }

    // divide by 3
    while (n % 3 == 0) {
        n /= 3;
    }

    // divide by 5
    while (n % 5 == 0) {
        n /= 5;
    }

    // agar end me 1 bacha → ugly number
    return (n == 1);
}

int main() {
    int n;
    cin >> n;

    if (isUgly(n))
        cout << "Ugly Number";
    else
        cout << "Not Ugly Number";

    return 0;
}