/*
Constraints:
1 <= a.size(), b.size() <= 10^5
1 <= a[i] <= 10^5
1 <= b[i] <= 10^5

Input: a[] = [1, 2, 3, 4, 5, 10], b[] = [2, 3, 1, 0, 5]
Output: [4, 10]
Explanation: 4 and 10 are present in first array, but not in second array.
Input: a[] = [4, 3, 5, 9, 11], b[] = [4, 9, 3, 11, 10]
Output: [5]  
Explanation: Second array does not contain element 5.
Input: a[] = [9], b[] = [7, 9, 4, 9, 9, 9]
Output: []  
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hs[N];
int main(){
    int a[]={1, 2, 3, 4, 5, 10};
    int b[]={2, 3, 1, 0, 5};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
   for(int i=0;i<n;)
    
    return 0;
}