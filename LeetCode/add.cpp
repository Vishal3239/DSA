#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> L1={9,9};
    vector<int> L2={4,8,9};
    int t;
    int m=L1.size();
    int n=L2.size();
    vector<int>sum;
    int temp=0;
    int c=0;

    if(m>=n){
        t=m;
        for(int i=m-1;i>=0;--i){
        if(n!=0){
            --n;
            temp=L1[i]+L2[n]+c;
            c=0;
        }else{
            temp=L1[i]+c;
            c=0;
        }
        
        if(temp<10){
            sum.push_back(temp);
        }else{
            c=temp/10;
            sum.push_back(temp%10);
        }
        
        }
        if(c>0)
        sum.push_back(c);
    }else{
        t=n;
        for(int i=n-1;i>=0;--i){
            if(m!=0){
                --m;
                temp=L2[i]+L1[m]+c;
                c=0;
            }else{
                temp=L2[i]+c;
                c=0;
            }
        
            if(temp<10){
                sum.push_back(temp);
            }else{
                c=temp/10;
                sum.push_back(temp%10);
            }
        
        }
        if(c>0)
        sum.push_back(c);
    }

    for(int p:sum){
        cout<<p<<" ";
    }
    return 0;
}
