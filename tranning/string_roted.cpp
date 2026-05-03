#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string temp=s1+s1;
    int n=temp.length();
    int m=s2.length();
    if(m>s1.length())
    {
        cout<<"false";
        return 0;
    }
    int count=0;
    for(int i=0;i<n;i++){
        int j=0;
        while (j < s2.size() && temp[i + j] == s2[j]) {
            j++;
        }
        count=j;
    }
    if(count==m)
        cout<<"true";
        else
    cout<<"false";
    return 0;
}