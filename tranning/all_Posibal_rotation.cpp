#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i){
        for(int j=0;j<s.length();++j){
           cout<< s[(i+j)%s.length()];
        }
        cout<<endl;
    }
    return 0;
}