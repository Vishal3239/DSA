#include<bits/stdc++.h>
using namespace std;
int main(){
   /* int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<v.front();*/
   /* vector<int>v1(5);
    for(int x:v1)
    cout<<x<<" ";
    cout<<endl;

    vector<int>v2(5,10);
    v2.clear();// all delete
    v2.resize(10);// size 10
    v2.resize(5);// extra remove
    v2.insert(v2.begin()+2,50);//second index add value in 50
    v2.push_back(9);
    for(int x:v2)
    cout<<x<<" ";
    cout<<endl;

    vector<int>v3={1,2,3,5,6,4,8,9,7};
    v3.push_back(50);
    
    v3.pop_back();
    v3.insert(v3.begin()+5,100);// 4 index insert value 100
    v3.erase(v3.begin()+1);// 2 index delete value
    cout<<v3.at(5)<<endl;
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;

    reverse(v3.begin(),v3.end());// reverse order
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;

    // shorting alogorithm
    sort(v3.begin(),v3.end());// asscending order
    
    for(auto it=v3.begin();it!=v3.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    sort(v3.begin(),v3.end(),greater<int>());// descending order
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;

    binary_search(v3.begin(),v3.end(),4);
    */

    vector<int>L1={1,2,3,5,7};
    vector<int>L2={1,2,3};
    int m= L1.size();
    // int n=L2.size();
    // for(int i=m-1;i>=0;--i){
    //     if(n!=0){
    //         --n;
    //         cout<<L1[i]+L2[n]<<" ";
            
    //     }else{
    //         cout<<L1[i]+0<<" ";
    //     }
        
    // }
    reverse(L1.begin()+2,L1.end());
    for(auto x:L1)
    cout<<x<<" ";
    



    return 0;
}