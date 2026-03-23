#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b;
    cin>>a>>b;

    int j=a.size()-1;
    int k=b.size()-1;

    vector<int> ans;
    int carry=0;

    while(j>=0 || k>=0 || carry){

        int x = j>=0 ? a[j]-'0' : 0;
        int y = k>=0 ? b[k]-'0' : 0;

        int sum = x + y + carry;

        ans.push_back(sum%2);
        carry = sum/2;

        j--;
        k--;
    }

    string c;

    for(int i=ans.size()-1;i>=0;i--)
        c += ans[i] + '0';

    cout<<c;
}