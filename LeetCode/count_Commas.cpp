#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long ans=0;
    cin>>n;
    // easy
    // if(n<999)
    // cout<<0;
    // else{
        
    //     cout<<n-1000+1;
    // }
        

    // medium
  /*  1000 to 999,999 --> 1 commas
      100000 to 999,999,999 --> 2 commas

  */

  long long start = 1000;
  int commas=1;
  while(start<=n){
    long long end=start*1000-1;
    long long count=(min(n,end)-(start-1));
    if(count>0)
    ans+=count*commas;

    start*=1000;
    commas++;
  }
  cout<<ans;


}