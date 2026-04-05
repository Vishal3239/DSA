#include<bits/stdc++.h>
using namespace std;
int main(){
    string robot;
    cin>>robot;
    int x=0,y=0;
    for(char m:robot){
        if(m == 'U')
        y++;
        else if(m == 'D')
        y--;
        else if(m == 'R')
        x++;
        else
        x--;
    }
    if( x==0 && y==0)
    cout<<"true";
    else 
    cout<<"false";
}