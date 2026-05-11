#include <bits/stdc++.h>
using namespace std;

int reverseBits(int n)
{
    unsigned ans = 0;

    for (int i = 0; i < 32; i++)
    {

        ans = ans << 1; // ans ko left shift karo

        ans = ans | (n & 1); // n ka last bit add karo

        n = n >> 1; // n ko right shift karo
    }

    return ans;
}

int main()
{
    unsigned int n;
    cin >> n;

    cout << reverseBits(n);
    return 0;
}