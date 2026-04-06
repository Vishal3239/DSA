#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while(left < right) {
        
        // left pointer ko valid character tak le jao
        while(left < right && !isalnum(s[left])) {
            left++;
        }
        
        // right pointer ko valid character tak le jao
        while(left < right && !isalnum(s[right])) {
            right--;
        }
        
        // compare (case-insensitive)
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string s;
    getline(cin, s);  // full line input
    
    if(isPalindrome(s))
        cout << "true";
    else
        cout << "false";
}