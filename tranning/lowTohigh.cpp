#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,h;
    cin>>l>>h;
    
    // vector<int>v;
    // for(int i=l;i<=h;++i){
    //     int t=i;
    //     while(t!=0){
    //         v.push_back(t%10);
    //         t/=10;
    //     } 
    //     int j=0,count=0;
    //     sort(v.begin(),v.end());
    //     for(int i=j+1;i<v.size();++i){
    //         if(v[j]==v[i])
    //         count++;
    //         j++;
    //         if(count==1){
    //             break;
    //         } 
    //     }
    //     v.clear();
    //     if(count+1==2){
    //         continue;
    //     }else{
    //         cout<<i<<" ";
    //     }    
    // }
    
    // for(int i=l;i<=h;++i){
    //     int n=i;
    //     int found=1;
    //     int freq[10]={0};
    //     while(n!=0){
    //         int r=n%10;
    //         freq[r]++;
           
    //         if(freq[r]==2){
    //             found=0;
    //             break;
    //         }
    //         n/=10;
            
    //     }
    //     if(found==1)
    //     cout<<i<<" ";
        
    // }
    
    for(int i=l;i<=h;i++){
        map<int,int>m;
        int n=i;
        int flag=0;
        while(n!=0){
            m[n%10]++;
            n/=10;  
        }
        for(auto x:m){
            if(x.second==2)
            flag=1;        
        }
        if(flag==0)
        cout<<i<<" ";

    }

}