#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,goal;
    cin>>s1>>goal;
    string temp = s1 + s1;
    int n = temp.length();
    int m = goal.length();
    if (m != s1.length())
    {
        cout<<"false";
        return 0;
    }
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && temp[i + j] == goal[j])
        {
            j++;
        }
        if (j == m){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}