// यह sorted order maintain नहीं करता।
// अंदर से Hash Table का उपयोग करता है।
// Average time complexity = O(1) होती है (बहुत fast)।

// Example

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;

    m[2] = "Apple";
    m[1] = "Banana";
    m[3] = "Mango";

    for(auto x : m){
        cout << x.first << " " << x.second << endl;
    }
}


// Output (order random हो सकता है)
// 2 Apple
// 3 Mango
// 1 Banana
// 3. Difference (Short Table)
// Feature	map	unordered_map
// Order	Sorted	Random
// Data Structure	Red-Black Tree	Hash Table
// Time Complexity	O(log n)	O(1) average
// Speed	Slow	Faster
// Header	#include <map>	#include <unordered_map>

// ✅ Simple Rule याद रखने के लिए
// Sorted data चाहिए → map
// Fast access चाहिए → unordered_map