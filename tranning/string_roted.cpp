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
    int j=0;
    for(int i=0;i<n;i++){
        if(j!=m){
            if(s2[j]==temp[i]){
                j++;
            }
        }
    }
    if(j==m)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}