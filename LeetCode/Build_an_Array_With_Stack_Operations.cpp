#include <iostream>
#include <vector>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> ans;
    int j = 0; // target pointer

    for(int i = 1; i <= n; i++) {
        ans.push_back("Push");  // har number push hoga

        if(i == target[j]) {
            j++;  // match mila → next target
        } 
        else {
            ans.push_back("Pop"); // nahi chahiye → hata do
        }

        // target complete ho gaya → stop
        if(j == target.size()) break;
    }

    return ans;
}

int main() {
    vector<int> target = {1,2};
    int n = 4;

    vector<string> result = buildArray(target, n);

    for(string op : result) {
        cout << op << " ";
    }

    return 0;
}