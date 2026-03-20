#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(50);
    dq.pop_front();
    for(int x:dq)
    cout<<x<<" ";
    cout<<endl<<dq.size()<<endl;
    cout<<dq.at(1);
    return 0;
}