#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms={10,10,20,50,80,1,50,1};
    ms.insert(50);
    // rease 10 only one {
    auto it = ms.find(10);
    if(it!=ms.end())
    ms.erase(it);
    // }

    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<ms.count(50);
    return 0;
}