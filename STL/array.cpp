#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,5>arr={10,20,30,50,90};
    cout<< arr.front()<<endl;
    cout<< arr.back()<<endl;
    cout<< arr.at(3)<<endl;
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}