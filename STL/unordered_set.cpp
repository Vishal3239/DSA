#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>us={10,20,20,60,10,10};
    us.insert(100);
    us.erase(10);
    for(auto it=us.begin();it!=us.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    if(us.find(10)!=us.end())
    cout<<"find";
    else
    cout<<"not found";
    return 0;
}