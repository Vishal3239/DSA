// यह keys को sorted order में store करता है।
// अंदर से Balanced Binary Search Tree (Red-Black Tree) का उपयोग करता है।
// Searching, insertion, deletion की time complexity = O(log n) होती है।

// Example

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;


    m[2] = "Apple";
    m[1] = "Banana";
    m[3] = "Mango";
    m[4]="vishal";
    m[5]="Sant";

    for(auto x : m){
        cout << x.first << " " << x.second << endl;
    }
    
}
// Output
// 1 Banana
// 2 Apple
// 3 Mango

//➡️ Keys automatically sorted हो गईं।