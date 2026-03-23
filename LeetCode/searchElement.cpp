#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];

int main() {
	int n,a;
	cin>>n>>a;
	
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    set<int> s(arr,arr+n);

	if(s.find(a)!=s.end())
	cout<<"yes";
    else
    cout<<"no";
	return 0;
	

}