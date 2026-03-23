#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<string,char> m;
        m["00"]='A';
        m["01"]='T';
        m["10"]='C';
        m["11"]='G';

        for(int i=0;i<n;i+=2){
            string temp="";
            temp+=s[i];
            temp+=s[i+1];

            cout<<m[temp];
        }

        cout<<endl;
   }
}