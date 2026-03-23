#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
    sort(v.begin(),v.end());
    int BHIM=0;
    int CHUTKI=0;
    for(int i=0;i<n;++i){
        if(i%2==0){
            if(v[i]%2==0)
            CHUTKI+=v[i];
        }else{
            if(v[i]%2!=0)
            BHIM+=v[i];
        }
    }
    if(BHIM>CHUTKI) cout<<"SCORE IS : "<<BHIM<<" BHIM IS WINNER...";
    else if(CHUTKI>BHIM) cout<<"SCORE IS : "<<CHUTKI<<" CHUTKI IS WINNER...";
    else cout<<"BOTH EQUAL "<<BHIM<<":"<<CHUTKI<<" MATCH DRAW";
}