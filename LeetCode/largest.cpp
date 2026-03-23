#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int arr[N];

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    set<int>s(arr,arr+n);
	    cout<<*s.rbegin();
	}
	return 0;

}