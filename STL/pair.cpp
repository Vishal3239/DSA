#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair ( vishal,30)
  /*  pair<string,int>p;
    p.first="vishal";
    p=make_pair("vishal",30);
    p.second=30;
    cout<<p.first<<" "<< p.second;*/

    // vishal 30,20;
    pair<string,pair<int,int>>p;
    p.first="vishal";
    p.second.first=30;
    p.second.second=20;
    //p=make_pair("vishal",make_pair(30,20));
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
    return 0;
}