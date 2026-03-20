#include<bits/stdc++.h>
using namespace std;
int main(){
    // desending -> set<int,greater<int>>s;
    set<int>s={10,50,40,30,5,5,1,1};
    // for(int i:s){
    //     cout<<i<<" ";
    // }
    s.insert(60);
    s.insert(90);
    s.erase(1);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"small= "<<*s.begin()<<endl;
    cout<<"large= "<<*s.rbegin();
    return 0;
}