#include<bits/stdc++.h>
using namespace std;
int main(){
   /// list<int>l;
   list<int>l={20,30,50,70,90};
    l.push_back(500);
    l.push_back(40);
    l.push_back(60);
    l.push_back(80);
    l.push_back(10);
    l.pop_back();
    l.pop_front();
    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    return 0;
    
}